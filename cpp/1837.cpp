#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if (a % b >= 0) {
        cout << q << " " << r << endl;
    } else if (b > 0) {
        q--;
        r = -(q*b-a);
        cout << q << " " << r << endl;
    } else { // b < 0
        q++;
        r = -(q*b-a); 
        cout << q << " " << r << endl;
    }
}