// https://leetcode-cn.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow, fast;
        slow = fast = 0;
        while(fast < nums.size())
        {
            if(nums[fast])
            {
                swap(nums[fast], nums[slow]);
                slow++;
            }
            fast++;
        }
    }
};

// 21 / 21 个通过测试用例
// 状态：通过
// 执行用时: 4 ms
// 内存消耗: 8.8 MB