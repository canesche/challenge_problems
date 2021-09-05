#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int h, p;
    cin >> h >> p;

    double res = (1.0 * h) / p;

    cout << setprecision(2) << fixed << res << endl;

    return 0;
}