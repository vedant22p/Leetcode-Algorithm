// Link to the problem: https://leetcode.com/problems/triangle/


// Solution:
class Solution {
private:
    int helper(int row, int col, vector<vector<int>> &triangle, int n, vector<vector<int>> &dp)
    {
        if (row == n - 1)
        {
            return triangle[row][col];
        }

        if (dp[row][col] != -1)
            return dp[row][col];

        int down, downRight;
        down = downRight = INT_MAX;

        down = helper(row + 1, col, triangle, n, dp);
        downRight = helper(row + 1, col + 1, triangle, n, dp);

        return dp[row][col] = triangle[row][col] + min(down, downRight);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        
        return helper(0, 0, triangle, n, dp);
    }
};
