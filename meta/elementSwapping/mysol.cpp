#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

/*
  Time Complexity: O(n^2)
  Space complexity: O(1)
*/

vector <int> findMinArray(vector <int> arr, int k) {
  // Write your code here
  int n = arr.size();
  
  for (int i = 0; i < n-1 && k > 0; ++i) {
    int pos = i;
    for (int j = i+1; j < n; ++j) {
      if (j-i > k)
        break;
      if (arr[j] < arr[pos])
        pos = j;
    }
    
    for (int j = pos; j > i; --j)
      swap(arr[j], arr[j-1]);
    
    k -= pos - i;
  }
  
  return arr;
}












// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.
void printIntegerVector(vector <int> array) {
  int size = array.size();
  cout << "[";
  for (int i = 0; i < size; i++) {
    if (i != 0) {
      cout << ", ";
    }
   cout << array[i];
  }
  cout << "]";
}

int test_case_number = 1;

void check(vector <int>& expected, vector <int>& output) {
  int expected_size = expected.size(); 
  int output_size = output.size(); 
  bool result = true;
  if (expected_size != output_size) {
    result = false;
  }
  for (int i = 0; i < min(expected_size, output_size); i++) {
    result &= (output[i] == expected[i]);
  }
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printIntegerVector(expected); 
    cout << " Your output: ";
    printIntegerVector(output);
    cout << endl; 
  }
  test_case_number++;
}

int main() {

  int n_1 = 3, k_1 = 2;
  vector <int> arr_1{5, 3, 1};
  vector <int> expected_1{1, 5, 3};
  vector <int> output_1 = findMinArray(arr_1,k_1);
  check(expected_1, output_1);

  int n_2 = 5, k_2 = 3;
  vector <int> arr_2{8, 9 ,11, 2, 1};
  vector <int> expected_2{2, 8, 9, 11, 1};
  vector <int> output_2 = findMinArray(arr_2,k_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}