#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, x, y;

    cin >> n >> x >> y;

    cout << fixed << setprecision(2) << n*1.0 / (x+y) << endl;

}