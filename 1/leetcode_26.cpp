/*
https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int slow, fast;
        slow = 0;
        fast = 1;
        while(fast < nums.size())
        {
            if(nums[fast] == nums[fast - 1])
                fast++;
            else
            {
                slow++;
                nums[slow] = nums[fast];
                fast++;
            }
        }
        return slow + 1;
    }
};

/*
362 / 362 个通过测试用例
状态：通过
执行用时: 20 ms
内存消耗: 17.9 MB
*/