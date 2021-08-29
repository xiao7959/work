// https://leetcode-cn.com/problems/search-insert-position/solution/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, ans = nums.size();
        while (left <= right)
        {
            int mid = (right + left) >> 1;
            if (target <= nums[mid])
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return ans;
    }
};

// 62 / 62 个通过测试用例
// 状态：通过
// 执行用时: 8 ms
// 内存消耗: 9.5 MB