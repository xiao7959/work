/*
https://leetcode-cn.com/problems/maximum-subarray/submissions/
*/ 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], pre = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            pre = max(pre + nums[i], nums[i]);
            if(pre > sum)
                sum = pre;
        }
        return sum;
    }
};

/*
203 / 203 个通过测试用例
状态：通过
执行用时: 8 ms
内存消耗: 12.8 MB
*/ 