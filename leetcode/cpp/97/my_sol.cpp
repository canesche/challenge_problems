/*
    Runtime: 4 ms, faster than 35.06% of C++ online submissions for House Robber.
    Memory Usage: 7.9 MB, less than 22.00% of C++ online submissions for House Robber.

    Complexity time: O(n), because the algorithm will need path at least once each index of nums array, 
                           so the algorithm will be linear time
    Complexity Space: O(n), because the meimozation we need use a vector with nums vector size to store 
                           each index. 
*/

class Solution {
public:
    int rec(vector<int>& nums, int idx, vector<int>& dp) {
        if (idx >= nums.size()) return 0;
        
        if (dp[idx] != -1) 
            return dp[idx];
        
        dp[idx] = max(nums[idx]+rec(nums, idx+2, dp), rec(nums, idx+1, dp));
        
        return dp[idx];
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return rec(nums, 0, dp);
    }
};