#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

/*
  Time complexity: O(nlog(n)+k), because priority queue spend log(n) to 
      insert each element, and I have a list with n length, so I spend n*log(n) to do this operation
  Space complexity: O(n), because I used the queue to store my data.
*/

int maxCandies(vector <int> arr, int k) {
  // Write your code here
  priority_queue<int> q;
  
  int n = arr.size();
  for (int i = 0; i < n; ++i) {
    q.push(arr[i]);
  }
  
  int maxCandy = 0, value;
  for (int i = 0; i < k; ++i) {
    value = q.top();
    maxCandy += value;
    q.pop();
    q.push(value/2);
  }
  return maxCandy;
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

  int k_1 = 3;
  vector <int> arr_1{2, 1, 7, 4, 2};
  int expected_1 = 14;
  int output_1 = maxCandies(arr_1, k_1);
  check(expected_1, output_1);

  int k_2 = 3;
  vector <int> arr_2{19, 78, 76, 72, 48, 8, 24, 74, 29};
  int expected_2 = 228;
  int output_2 = maxCandies(arr_2, k_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}