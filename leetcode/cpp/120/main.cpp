/*
    Complexity Time: O(n^2)
    Complexity memory: O(n)
*/

class Solution {
public: 
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> v = triangle[n-1];
        
        for (int i = n-2; i > -1; i--) {
            for (int j = 0, m = triangle[i].size(); j < m; ++j) {
                v[j] = triangle[i][j] + min(v[j], v[j+1]);
            }
        }
        
        return v[0];
    }
};