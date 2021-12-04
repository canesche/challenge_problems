class Solution {
public:
    
    /*
    --- Recursive solution
    Runtime: 4 ms, faster than 80.63% of C++ online submissions for Search Insert Position.
    Memory Usage: 9.6 MB, less than 72.20% of C++ online submissions for Search Insert Position.
    
    Time Complexity: O(log(n))
    Space Complexity: O(1)
    
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        
        if (left >= right) {
            if (target <= nums[left])
                return left;
            return left+1;
        }
        
        int mid = (left + right) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            return binarySearch(nums, target, mid+1, right);
        else
            return binarySearch(nums, target, left, mid);
        
    }
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size() == 0) return 0;
        
        return binarySearch(nums, target, 0, nums.size()-1);
    }
    */
    
    /*
        Interactive solution
        Runtime: 4 ms, faster than 80.63% of C++ online submissions for Search Insert Position.
        Memory Usage: 9.7 MB, less than 72.20% of C++ online submissions for Search Insert Position.
        
        Time Complexity: O(log(n))
        Space Complexity: O(1)
    */
    
    int searchInsert(vector<int>& nums, int target) {
        
        int left = 0, mid;
        int right = nums.size();
        
        if (right == 0) return 0;
        
        while(left < right) {
            mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid;
            else
                left = mid+1;
        }
        return left;
    }
};