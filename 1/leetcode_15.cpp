/*
https://leetcode-cn.com/problems/3sum/
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            else
            {
                int left = i + 1, right = nums.size() - 1;
                while(left < right)
                {
                    if (nums[i] + nums[left] + nums[right] == 0)
                    {
                        ans.push_back({nums[i], nums[left], nums[right]});           
                        while(left < right && nums[left] == nums[left + 1])
                            left++;
                        while(left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;  
                        right--;
                    }

                    else if (nums[i] + nums[left] + nums[right] > 0)
                        right--;
                    else
                        left++;    
                }
            }
        }
        return ans;
    }
};

/*
318 / 318 个通过测试用例
状态：通过
执行用时: 112 ms
内存消耗: 19.4 MB
*/