#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double l, a_total, a;

    while(cin >> l){

        a = l*l*sqrt(3)/4.0;

        a_total = a*8.0/5.0;

        cout << fixed << setprecision(2);
        cout << a_total << endl;
    }

    return 0;
}