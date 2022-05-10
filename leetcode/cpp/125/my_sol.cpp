class Solution {
public:
    string processing(string s) {
        string aux = "";
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            int v = (int) s[i];
            if (v > 47 && v < 58)
                aux += s[i];
            else if(v > 96 && v < 123)
                aux += s[i];
            else if(v > 64 && v < 91)
                aux += (char) (v + 32); 
        }
        return aux;
    }
    
    bool isPalindrome(string s) {
        s = processing(s);
        
        int n = s.size();
        for(int i = 0; i < n/2; ++i) {
            if(s[i] != s[n-1-i])
                return false;
        }
        return true;
    }
};