/*
    Time complexity: O(n1*n2)
    Space complexity: O(min(n1,n2))
*/

class Solution {
public:
    
    void aux(vector<int>& nums1, vector<int>& nums2, int n1, int n2, vector<int>& nums3) {
        for (int i = 0; i < n2; ++i) {
            for (int j = 0; j < n1; ++j) {
                if (nums2[i] == nums1[j] && nums1[j] != -1) {
                    nums3.push_back(nums2[i]);
                    nums2[i] = -1;
                    nums1[j] = -1;
                    break;
                }
            }
        }
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        aux(nums1, nums2, n1, n2, nums3);
        
        return nums3;
    }
};