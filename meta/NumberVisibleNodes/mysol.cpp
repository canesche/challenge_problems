#include <bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std;

// Add any helper functions you may need here

/*
  Time Complexity: O(n)
  Space Complexity: O(1)
*/

struct Node {
  int data; 
  Node* left ; 
  Node* right; 
  Node() {
    data = 0; 
    left = NULL; 
    right = NULL; 
  }
  Node(int data) {
    this->data = data; 
    this->left = NULL; 
    this->right = NULL; 
  }
};

// Add any helper functions you may need here
void visibleRecursion(Node* root, int level, vector<int>& ans) {
  if (!root)
    return;
  if (ans.size() <= level) 
    ans.push_back(root->data);
  
  visibleRecursion(root->left, level+1, ans);
  visibleRecursion(root->right, level+1, ans);
}

int visibleNodes(Node* root) {
  // Write your code here
  if (!root) return 0;
  vector<int> ans;
  
  visibleRecursion(root, 0, ans);
  
  /*
  for(int i = 0; i < ans.size(); ++i)
    cout << ans[i] << " " << endl;
  */
  
  return ans.size();
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

  Node* root_1 = new Node(8); 
  root_1->left = new Node(3); 
  root_1->right = new Node(10); 
  root_1->left->left = new Node(1); 
  root_1->left->right = new Node(6); 
  root_1->right->right = new Node(14); 
  root_1->left->right->left = new Node(4); 
  root_1->left->right->right = new Node(7); 
  root_1->right->right->left = new Node(13); 
  int expected_1 = 4;
  int output_1 = visibleNodes(root_1);
  check(expected_1, output_1);

  Node* root_2 = new Node(10); 
  root_2->left = new Node(8);
  root_2->right = new Node(15);
  root_2->left->left = new Node(4);
  root_2->left->left->right = new Node(5);
  root_2->left->left->right->right = new Node(6);
  root_2->right->left = new Node(14);
  root_2->right->right = new Node(16);
  int expected_2 = 5;
  int output_2 = visibleNodes(root_2);
  check(expected_2, output_2);

  // Add your own test cases here
  
}