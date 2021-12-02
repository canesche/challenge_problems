#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

string rotationalCipher(string input, int rotationFactor) {
  
  /*
    Time Complexity: O(n)
    Space complexity: O(1)
  */
  
  string s = "";
  int v, n = input.size();
    
  // Write your code here
  for (int i = 0; i < n; ++i) {
    v = input[i];
    
    if (v >= 'A' && v <= 'Z') {
      v = (rotationFactor + v - 'A') % ('Z'-'A'+1) + 'A';
    } else if (v >= 'a' && v <= 'z') {
      v = (rotationFactor + v - 'a') % ('z'-'a'+1) + 'a';
    } else if (v >= '0' && v <= '9') {
      v = (rotationFactor + v - '0') % ('9'-'0'+1) + '0';
    }

    s += v;
  }
  
  return s;
}












// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.

void printString(string& str) {
  cout << "[\"" << str << "\"]";
}

int test_case_number = 1;

void check(string& expected, string& output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printString(expected); 
    cout << " Your output: ";
    printString(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {

  string input_1 = "All-convoYs-9-be:Alert1.";
  int rotationFactor_1 = 4;
  string expected_1 = "Epp-gsrzsCw-3-fi:Epivx5.";
  string output_1 = rotationalCipher(input_1, rotationFactor_1);
  check(expected_1, output_1);

  string input_2 = "abcdZXYzxy-999.@";
  int rotationFactor_2 = 200;
  string expected_2 = "stuvRPQrpq-999.@";
  string output_2 = rotationalCipher(input_2, rotationFactor_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}