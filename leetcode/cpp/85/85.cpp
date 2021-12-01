/*
Runtime: 24 ms, faster than 95.14% of C++ online submissions for Maximal Rectangle.
Memory Usage: 11 MB, less than 94.49% of C++ online submissions for Maximal Rectangle.

Time complexity: O(row*col*row)
Space complexity: O(row*col) 
*/

class Solution {
public:
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int row = matrix.size();
        if (row == 0) return 0;
        int col = matrix[0].size();
        
        int dp[row][col];
        int acc;
        int maxArea = 0;
        
        // fill dp whith the number of 1s of left side
        for (int i = 0; i < row; ++i) {
            acc = 0;
            for (int j = 0; j < col; ++j) {
                if (matrix[i][j] == '1')
                    acc += 1;
                else 
                    acc = 0;
                
                dp[i][j] = acc;
            }
        }
        
        int bSide = 0, rSide = 0, k;
        
        for (int i = row-1; i >= 0; --i) {
            for (int j = col-1; j >= 0; --j) {
                
                bSide = matrix[i][j];
                rSide = 0;
                k = i;
                
                // iterate all possible rect 
                while(k >= 0 && dp[k][j]) {
                    bSide = min(bSide, dp[k][j]);
                    rSide++;
                    
                    maxArea = max(maxArea, bSide * rSide);
                    --k;
                }
            }
        }
        
        return maxArea;
    }
};