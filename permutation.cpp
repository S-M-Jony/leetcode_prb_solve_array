class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int lastDecIdx = nums.size() - 1;

        while(lastDecIdx > 0 && nums[lastDecIdx] <= nums[lastDecIdx - 1]){
            lastDecIdx--;
        }

        if(lastDecIdx == 0){
            reverse(nums.begin(), nums.end());
            return;
        }

        if(lastDecIdx == nums.size() - 1){
            swap(nums[nums.size() - 1], nums[nums.size() - 2]);
            return;
        }

        int idxToSwap = lastDecIdx - 1;

        auto it_ubound = upper_bound(nums.rbegin(), nums.rend() - lastDecIdx, nums[idxToSwap]);
        iter_swap(nums.begin() + idxToSwap, it_ubound);

        reverse(nums.begin() + lastDecIdx, nums.end());
    }
};
