/*
https://leetcode-cn.com/problems/merge-sorted-array/submissions/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {                
        for (int i = 0; i < n; ++i) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};


/*
59 / 59 个通过测试用例
状态：通过
执行用时: 0 ms
内存消耗: 8.7 MB
*/