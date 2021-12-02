/*
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
    Memory Usage: 6.4 MB, less than 96.84% of C++ online submissions for Letter Combinations of a Phone Number.

    Time Complexity: O(N*M*O)
    Space Complexity: 
*/

class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        string numToStr[10] = {"","","abc","def","ghi","jkl","mno",
                            "pqrs", "tuv", "wxyz"};
        
        int n = digits.size();
         
        if (n == 0)
            return {};
        
        vector<string> ans;
        ans.push_back("");
        
        string word;
        for (int i = 0; i < n; ++i) {
            
            word = numToStr[digits[i]-'0'];
            vector<string> tmp;
            
            for (int j = 0; j < word.size(); ++j) {
                for (auto s : ans) {
                    tmp.push_back(s + word[j]);
                }
            }
            
            ans.swap(tmp);
        }
        
        return ans;
    }
};