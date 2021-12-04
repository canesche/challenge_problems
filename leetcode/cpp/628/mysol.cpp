class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        /*
            Sort solution
            Time Complexity: O(nlogn)
            Space Complexity: O(1)
            
            Runtime: 40 ms, faster than 79.38% of C++ online submissions for Maximum Product of Three Numbers.
            Memory Usage: 27.7 MB, less than 79.14% of C++ online submissions for Maximum Product of Three Numbers.
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
        */
        
        /*
            ---three variable solution---
            Time Complexity: O(n)
            Space Complexity: O(1)
            
            Runtime: 36 ms, faster than 89.28% of C++ online submissions for Maximum Product of Three Numbers.
            Memory Usage: 27.6 MB, less than 98.64% of C++ online submissions for Maximum Product of Three Numbers.
        */
        
        int n = nums.size();
        
        int max1 = max(nums[0], nums[1]);
        int min1 = min(nums[0], nums[1]);
        int min2, max2, total = INT_MIN;
        
        min2 = max2 = nums[0] * nums[1];
        
        for (int i = 2; i < n; ++i) {
            total = max(total, max(nums[i]*min2, nums[i]*max2));
            min2 = min(min2, min(nums[i]*min1, nums[i]*max1));
            max2 = max(max2, max(nums[i]*min1, nums[i]*max1));
            min1 = min(nums[i], min1);
            max1 = max(nums[i], max1);
        }
        return total; 
    }
};