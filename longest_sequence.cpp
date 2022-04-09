class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        int ans=INT_MIN;
        int count=1;

        if(nums.size()==0 || nums.size()==1){
            return nums.size();
        }

        for(auto it=st.begin(); next(it)!=st.end(); it++){

            if(*(next(it)) - (*it) == 1)
                count++;
            else{
                ans=max(ans, count);
                count=1;

            }
        }
        ans=max(ans, count);
        return ans;
    }
};
