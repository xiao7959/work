// https://leetcode-cn.com/problems/pascals-triangle-ii/submissions/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result(rowIndex + 1);
        for(int i = 0; i < rowIndex + 1; i++)
        {
            result[i].resize(i + 1);
            result[i][0] = result[i][i] = 1;
            for(int j = 1; j < i; j++)
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }
        return result[rowIndex];
    }
};

// 34 / 34 个通过测试用例
// 状态：通过
// 执行用时: 0 ms
// 内存消耗: 6.5 MB
