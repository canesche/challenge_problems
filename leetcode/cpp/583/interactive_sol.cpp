/*
    Complexity Time: O(m*n)
    Complexity Memory: O(m*n)
*/

class Solution {
public:
    int dp[501][501];
    
    int lcs(string w1, string w2, int n, int m) {
        int dp[n+1][m+1];
        
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                dp[i][j] = 0;
            }
        }
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (w1[i-1] == w2[j-1]) 
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    
        return dp[n][m];
    }
    
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        int size = lcs(word1, word2, n, m);
        
        return m + n - 2*size;
    }
};