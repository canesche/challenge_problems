/*
    Runtime: 4 ms, faster than 81.30% of C++ online submissions for Maximum Product Subarray.
    Memory Usage: 12 MB, less than 7.22% of C++ online submissions for Maximum Product Subarray.

    Complexity Time: O(n), because It's necessary pass through the array, so It will solve in linear time.
    Complexity memory: O(n), because It's necessary memoization the minimun value and the maximun value. 
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> min_dp(n);
        vector<int> max_dp(n);
        
        min_dp[0] = max_dp[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            max_dp[i] = max(max_dp[i-1]*nums[i], max(min_dp[i-1]*nums[i], nums[i]));
            min_dp[i] = min(min_dp[i-1]*nums[i], min(max_dp[i-1]*nums[i], nums[i]));
        }
                            
        int max_value = nums[0];

        for(int i = 0; i < n; ++i) {
            if (max_value < max_dp[i])
                max_value = max_dp[i];
        } 
        return max_value;
    }
};