#include <iostream>

using namespace std;

int main() {

    int d;
    cin >> d;

    if(d > 1400) cout << 3 << endl;
    else if(d > 800) cout << 2 << endl;
    else cout << 1 << endl;

    return 0;
}