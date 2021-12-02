#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

/*
    Time complexity: O(n^2)
    Space complexity: O(1)
*/

/*
vector <int> CountSubarrays(vector <int> arr) {
  // Write your code here 
  vector<int> ans(arr.size(), 1);
  
  for (int i = 0; i < arr.size(); ++i) {
    int j = i+1;
    
    while(j < arr.size() && arr[i] > arr[j]) {
      ++ans[i];
      ++j;
    }

    j = i-1;
    while(j >= 0 && arr[i] > arr[j]) {
      ++ans[i];
      --j;
    }
  }
  
  return ans;
}*/

/*
    Time Complexity: O(n), 
    Space Complexity: O(n), 
*/
vector <int> CountSubarrays(vector <int> arr) {

    int n = arr.size();
    vector<int> ans(n, 1);
    vector<int> lSide(n, 0);
    vector<int> rSide(n, 0);
    int maxIndex = 0;

    lSide[0] = 1;
    // look the left side
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i-1]) {
            lSide[i] = 1;
        } else if (arr[i] > arr[maxIndex]) {
            lSide[i] = i + 1;
            maxIndex = i;
        } else {
            lSide[i] = lSide[i-1] + 1;
        }
    }

    maxIndex = n-1;
    rSide[n-1] = 1; 
    // look the right side
    for (int i = n-2; i > -1; --i) {
        if (arr[i] < arr[i+1]) {
            rSide[i] = 1;
        } else if (arr[i] > arr[maxIndex]) {
            rSide[i] = n - i;
            maxIndex = i;
        } else {
            rSide[i] = rSide[i+1] + 1;
        }
    } 

    for (int i = 0; i < n; ++i) {
        ans[i] = lSide[i] + rSide[i] - 1;
    }

    return ans;
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

  vector <int> test_1{3, 4, 1, 6, 2};
  vector <int> expected_1{1, 3, 1, 5, 1};
  vector <int> output_1 = CountSubarrays(test_1);
  check(expected_1, output_1);

  vector <int> test_2{2, 4, 7, 1, 5, 3};
  vector <int> expected_2{1, 2, 6, 1, 3, 1};
  vector <int> output_2 = CountSubarrays(test_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}