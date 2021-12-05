/*
    Time Complexity: O(n)
    Space Complexity: O(n)

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
*/

class Solution {
public:
    /*
        Time complexity: O(n)
        Space complexity: O(1)
    */
    
    int tryRob(vector<int>& nums, int size) {
        int prev = 0, curr = 0;
        for (int i = 0; i < size; ++i) {
            int temp = max(prev+nums[i], curr);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n ? nums[0] : 0;
        
        return tryRob(nums, n);
    }
};