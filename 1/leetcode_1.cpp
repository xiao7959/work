/*
https://leetcode-cn.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashtable;
        map<int, int>::iterator iter;
        for(int i = 0; i < nums.size(); i++)
        {
            iter = hashtable.find(target - nums[i]);
            if(iter != hashtable.end())
                return {iter->second, i};  
            hashtable[nums[i]] = i;  
        }
        return {};
    }
};

/*
55 / 55 个通过测试用例
状态：通过
执行用时: 8 ms
内存消耗: 10.7 MB
*/