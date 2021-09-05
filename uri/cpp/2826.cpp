#include <iostream>

using namespace std;

int main() {

    string s1, s2;
    cin >> s1 >> s2;

    if(s1 < s2) cout << s1 << endl << s2 << endl;
    else cout << s2 << endl << s1 << endl;

    return 0;
}