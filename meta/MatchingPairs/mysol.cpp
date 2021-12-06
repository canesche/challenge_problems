#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here


int matchingPairs(string s, string t) {
  // Write your code here
  unordered_set<string> mismatchS;
  int matching = 0;
  
  if (s == t) return s.size()-2; 
  
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != t[i]) {
      mismatchS.insert(s[i]+""+t[i]);
      cout << s[i] << " " << t[i] << endl;
    }
    else
      matching++;
  }
  
  cout << "opa" << endl;
  
  for (const string& m : mismatchS){
    cout << m << endl;
    string reverseString = ""; //it[1]+""+it[0];
    //cout << *it << endl;
    if (mismatchS.count(reverseString) > 0)
      matching += 2;
  }
  
  return matching;
}












// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.

void printInteger(int n) {
  cout << "[" << n << "]";
}

int test_case_number = 1;

void check(int expected, int output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printInteger(expected); 
    cout << " Your output: ";
    printInteger(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {
  string s_1 = "abcde";
  string t_1 = "adcbe";
  int expected_1 = 5;
  int output_1 = matchingPairs(s_1, t_1);
  check(expected_1, output_1);

  string s_2 = "abcd";
  string t_2 = "abcd";
  int expected_2 = 2;
  int output_2 = matchingPairs(s_2, t_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}