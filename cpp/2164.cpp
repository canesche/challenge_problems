#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    double fib = (pow(((1+sqrt(5))/2.0),n) - pow(((1-sqrt(5))/2.0),n))/sqrt(5);

    cout << setprecision(1) << fixed << fib << endl;

    return 0;
}