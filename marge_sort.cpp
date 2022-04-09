class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first = m - 1, second = n - 1, total = n + m - 1;
        while(first >= 0 && second >= 0) {
            if (nums1[first] > nums2[second]) nums1[total--] = nums1[first--];
            else nums1[total--] = nums2[second--];
        }

        while(second >= 0) {
            nums1[total--] = nums2[second--];
        }
    }
};
