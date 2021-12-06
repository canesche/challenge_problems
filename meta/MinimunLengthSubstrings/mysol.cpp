#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

/*
  Time Complexity: O(n)
  Space Complexity: O(1)
*/

int minLengthSubstring(string s, string t) {
  // Write your code here
  if (s.size() == 0 || s.size() < t.size())
    return -1;
  
  map<char, int> hashmap;
  
  for (int i = 0; i < t.size(); ++i) 
    hashmap[t[i]]++;
  
  int start = 0, end = 0, count = t.size(), minStart = 0, minSize = INT_MAX;
  int n = s.size();
  
  while(end < n) {
    if (hashmap[s[end]] > 0)
      count--;
    hashmap[s[end]]--;
    end++;
    
    while (count == 0) {
      if (end-start < minSize) {
        minStart = start;
        minSize = end-start;
      }
      hashmap[s[start]]++;
      
      if (hashmap[s[start]] > 0)
        count++;
      start++;
    }
  }
  
  if (minSize == INT_MAX) return -1;
  return minSize-minStart;
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

  string s_1 = "dcbefebce";
  string t_1 = "fd";
  int expected_1 = 5;
  int output_1 = minLengthSubstring(s_1, t_1);
  check(expected_1, output_1);

  string s_2 = "bfbeadbcbcbfeaaeefcddcccbbbfaaafdbebedddf";
  string t_2 = "cbccfafebccdccebdd";
  int expected_2 = -1;
  int output_2 = minLengthSubstring(s_2, t_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}