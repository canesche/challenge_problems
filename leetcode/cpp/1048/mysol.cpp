class Solution {
public:
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(), words.end(), [](const string &w1, const string &w2) {return w1.size() < w2.size();});
        
        unordered_map<string, int> dp;
        string pred;
        int r = 1;
        
        for (string w : words) {
            dp[w] = 1;
            for (int i = 0, n = w.size(); i < n; ++i) {
                pred = w.substr(0,i) + w.substr(i+1);
                if (dp.find(pred) != dp.end()) {
                    dp[w] = dp[pred] + 1;
                    r = max(dp[w], r);
                }
            }
        }
        
        return r;
    }
};