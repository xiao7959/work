// https://leetcode-cn.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            auto iter = m.find(nums[i]);
            if(iter != m.end())
            {
                if(i - (iter->second) <= k)
                    return true;
                else if(i-(iter->second) > k)
                    iter->second = i;
            }
            else
                m[nums[i]] = i;
        }
        return false;
    }
};

// 50 / 50 个通过测试用例
// 状态：通过
// 执行用时: 212 ms
// 内存消耗: 78.3 MB