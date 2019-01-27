#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    double pi = n / log(n);

    cout << setprecision(1) << fixed << pi << " " << 1.25506 * pi << endl;

    return 0;
}