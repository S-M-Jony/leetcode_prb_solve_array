class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int zeroCount = 0,i;
      for(i=0;i<nums.size();i++){
        if(nums[i]==0){
            zeroCount++;
        }
      }

     for(i=0;i<nums.size();i++){
        if(nums[i]!=0){
           ans.push_back(nums[i]);
        }
    }

    while(zeroCount--){
        ans.push_back(0);
    }

     for (int i = 0; i < nums.size(); i++) {
        nums[i] = ans[i];
    }
  }
};
