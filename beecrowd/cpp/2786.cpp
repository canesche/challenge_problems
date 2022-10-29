#include <iostream>

using namespace std;

int main() {

    int l, c;
    cin >> l >> c;

    int t1;
    int t2;

    t2 = (l-1) * 2 + (c-1) * 2;

    t1 = 2* l * c - (1 + t2 / 2);

    cout << t1 << "\n" << t2 << endl;
    return 0;
}