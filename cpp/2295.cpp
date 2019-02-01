#include <iostream>

using namespace std;

int main() {

    double a, g, ra, rg;

    cin >> a >> g >> ra >> rg;

    double dista = 1.0 * ra / a;
    double distg = 1.0 * rg / g;

    if(distg >= dista) cout << "G" << endl;
    else cout << "A" << endl;

    return 0;
}