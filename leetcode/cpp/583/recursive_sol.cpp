/*
    Complexity Time: O(m*n)
    Complexity Memory: O(m*n)
*/

class Solution {
public:
    int dp[501][501];
    
    int lcs(string w1, string w2, int i, int j, int n, int m) {
        if (i == n || j == m)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (w1[i] == w2[j]) {
            dp[i][j] = 1 + lcs(w1, w2, i+1, j+1, n, m);
            return dp[i][j]; 
        }
        dp[i][j] = max(lcs(w1,w2,i+1,j,n,m), lcs(w1,w2,i,j+1,n,m));
        return dp[i][j];
    }
    
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        for (int i = 0; i < 501; ++i) 
            for (int j = 0; j < 501; ++j)
                dp[i][j] = -1;
        
        int size = lcs(word1, word2, 0, 0, n, m);
        
        return m + n - 2*size;
    }
};