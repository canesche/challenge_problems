#include <iostream>

using namespace std;

int main() {

    string t;
    getline(cin, t);

    if(t.size() <= 140) cout << "TWEET";
    else cout << "MUTE";
    cout << endl; 

    return 0;
}