// https://leetcode-cn.com/problems/rotate-image/submissions/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        auto temp = matrix;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                temp[j][n - 1 -i] = matrix[i][j];
        matrix = temp;
    }
};

// 21 / 21 个通过测试用例
// 状态：通过
// 执行用时: 4 ms
// 内存消耗: 6.9 MB