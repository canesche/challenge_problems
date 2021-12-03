class Solution {
public:
    /*
    Recursive solution:
    Time Complexity: O(n)
    Space Complexity: O(1)
    
    int rec(vector<int>& nums, int idx, int &maxValue) {
        if (idx == 1)
            return nums[0];
        
        int currMaxValue = max(nums[idx-1], nums[idx-1] + rec(nums, idx-1, maxValue));
        maxValue = max(maxValue, currMaxValue);
        
        return currMaxValue; 
    }
    
    int maxSubArray(vector<int>& nums) {
        
        int maxValue = nums[0];
        rec(nums, nums.size(), maxValue);
        return maxValue;
    }
    */
    //===== Interactive solution ======
    
    int maxSubArray(vector<int>& nums) {
        
        int maxValue = nums[0], currValue = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            currValue = max(nums[i], nums[i] + currValue);
            maxValue = max(currValue, maxValue);
        }
        
        return maxValue;
    }
    
    // Follow up - divide and conquer
    /*struct Values {
        int maxV = INT_MIN;
        int maxLeft = INT_MIN;
        int maxRight = INT_MIN;
        int maxSum = INT_MIN;
    };
    
    Values divideAndConquer(vector<int>& nums, int left, int right, int &maxValue) {
        if (left >= right)
            return maxValue;
        
        int mid = (left + right) / 2;
        
        int leftSum = divideAndConquer(nums, left, mid, maxValue), ;
        int rightSum = divideANdConquer(nums, mid+1, right, maxValue);
    
        // I was think about...
    }
    
    int maxSubArra(vector<int>& nums) {
        return divideAndConquer(nums, 0, nums.size()-1, nums[0]);
    }
    */
};