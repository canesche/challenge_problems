#include <iostream>

using namespace std;

int main() {

    string t;
    getline(cin, t);

    if(t.size() <= 80){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}