// https://leetcode-cn.com/problems/pascals-triangle/submissions/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i = 0; i < numRows; i++)
        {
            result[i].resize(i + 1);
            result[i][0] = result[i][i] = 1;
            for(int j = 1; j < i; j++)
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }
        return result;
    }
};

// 14 / 14 个通过测试用例
// 状态：通过
// 执行用时: 0 ms
// 内存消耗: 6.4 MB