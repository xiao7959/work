// https://leetcode-cn.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};

// 20 / 20 个通过测试用例
// 状态：通过
// 执行用时: 8 ms
// 内存消耗: 15.1 MB