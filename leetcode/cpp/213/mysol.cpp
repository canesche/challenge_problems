class Solution {
public:
    
    // house1 = [0..n-2]
    // house2 = [1..n-1]
    
    /*
        Time complexity: O(n)
        Space complexity: O(1)
    */
    
    int tryRob(vector<int>& nums, int left, int right) {
        int prev = 0, curr = 0;
        
        for (int i = left; i < right; ++i) {
            int temp = max(prev+nums[i], curr);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n < 2) return (n == 0) ? 0 : nums[0];
        
        return max(tryRob(nums, 0, n-1), tryRob(nums, 1, n));
    }
};