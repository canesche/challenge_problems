#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here
/*
  Time Complexity: O(n*log(n))
  Space Complexity: O(1);
*/

int minOverallAwkwardness(vector <int> arr) {
  // Write your code here
  int n = arr.size();
  sort(arr.begin(), arr.end());
  
  int diff = arr[1]-arr[0];
  
  for (int i = 2; i < n; i+= 2) 
    diff = max(diff, arr[i] - arr[i-2]);
  
  for (int i = 3; i < n; i += 2)
    diff = max(diff, arr[i] - arr[i-2]);
  
  return max(diff, arr[n-1] - arr[n-2]); 
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

  vector <int> arr_1{5, 10, 6, 8};
  int expected_1 = 4;
  int output_1 = minOverallAwkwardness(arr_1);
  check(expected_1, output_1);

  vector <int> arr_2{1, 2, 5, 3, 7};
  int expected_2 = 4;
  int output_2 = minOverallAwkwardness(arr_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}