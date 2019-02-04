#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592654

using namespace std;

int main() {

    double a, b, c;
    while(cin >> a >> b >> c){
        double hl = b * tan( a * PI / 180.0 );
        cout << setprecision(2) << fixed;
        cout << 5.0 *(hl+c) << endl;
    }


    return 0;
}