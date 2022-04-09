class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();

        vector<int> leftMult(n);
        vector<int> rightMult(n);

        leftMult[0]=rightMult[n-1]=1;

        for(int i=1;i<n;i++)
        {
            leftMult[i]=leftMult[i-1]*nums[i-1];
            rightMult[n-i-1]=rightMult[n-i]*nums[n-i];
        }


         for(int i=0;i<n;i++)
            leftMult[i]=leftMult[i]*rightMult[i];

        return leftMult;
    }
};
