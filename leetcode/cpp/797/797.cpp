class Solution {
/*
Runtime: 12 ms, faster than 83.46% of C++ online submissions for All Paths From Source to Target.
Memory Usage: 10.7 MB, less than 85.52% of C++ online submissions for All Paths From Source to Target.
*/

public:
    
    void path(vector<vector<int>>& graph, int n, vector<int> &curr, 
              int i, vector<vector<int>> &res) {
        
        curr.push_back(i);
            
        if (i == n) {
            res.push_back(curr);
        } else {
            for (int node : graph[i]) {
                path(graph, n, curr, node, res);
            }
        }
        
        curr.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size()-1;
        vector<int> curr;
        vector<vector<int>> res;
        
        path(graph, n, curr, 0, res);
        
        return res;
    }
};