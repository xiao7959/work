/*
https://leetcode-cn.com/problems/3sum-closest/submissions/
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minr = INT_MAX, temp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum >= target)
                    right--;
                else
                    left++;
                if(fabs(sum - target) < minr)
                {
                    temp = sum;
                    minr = fabs(sum - target);
                }
            }
        }
        return temp;
    }
};

/*
131 / 131 个通过测试用例
状态：通过
执行用时: 16 ms
内存消耗: 9.5 MB
*/