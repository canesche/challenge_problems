class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        for (int i = 0; i < n/2; ++i) {
            if (s[i] != s[n-i-1])
                return false;
        }
        return true;
    }
};

class Solution {
public:
    // Follow up: Could you solve it without converting the integer to a string?
    bool isPalindrome(int x) {
        vector<int> v;
        if (x < 0)
            return false;
        while (x > 0) {
            v.push_back(x % 10);
            x = x / 10;
        }
        int n = v.size();
        for (int i = 0; i < n; ++i) {
            if (v[i] != v[n-i-1])
                return false;
        }
        
        return true;
    }
};