// https://leetcode-cn.com/problems/plus-one/submissions/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0;
        for(int i = digits.size() - 1; i >= 0;i--)
        {
            int sum;
            sum = digits[i] + flag;
            if(i == digits.size() - 1)
                sum++;
            if(sum >= 10)
                flag = 1;
            else if(sum < 10)
                flag = 0;
            digits[i] = sum % 10;
        }
        if(flag == 1)
            digits.insert(digits.begin(), flag);
        return digits;
    }
};

// 111 / 111 个通过测试用例
// 状态：通过
// 执行用时: 0 ms
// 内存消耗: 8.5 MB