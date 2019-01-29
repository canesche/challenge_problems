#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    while(n > 0){
        getline(cin, s);
        cout << "Y" << endl;
        n--;
    }
}