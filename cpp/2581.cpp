#include <iostream>

using namespace std;

int main() {

    int n;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++){
        getline(cin, s);
        cout << "I am Toorg!" << endl; 
    }

    return 0;
}