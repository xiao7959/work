/*
https://leetcode-cn.com/problems/container-with-most-water/
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxv = 0;
        while(left != right)
        {
            int v = min(height[left], height[right]) * (right - left);
            maxv = max(v, maxv);
            if(height[left] > height[right])
                right--;
            else
                left++;
        }
        return maxv;
    }
};

/*
60 / 60 个通过测试用例
状态：通过
执行用时: 72 ms
内存消耗: 57.6 MB
*/ 