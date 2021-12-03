/*
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate String.
    Memory Usage: 7.1 MB, less than 11.82% of C++ online submissions for Rotate String.

    Time Complexity: O(n)
    Space complexity: O(1)
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) 
            return false;
        else if (s == goal) 
            return true;
        
        int n = s.size();
        
        while(n--) {
            if (s == goal) // I considered here this O(1)
                return true;
            s = s.substr(1) + s[0]; // 1 shift on s
        }
        
        return false;
    }
};