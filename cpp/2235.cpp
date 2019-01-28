#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b || a == c || b == c)
        cout << "S" << endl;
    else if(a == b + c || b == a + c || c == a + b)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}