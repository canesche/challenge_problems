#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    float v, d;

    while(cin >> v >> d) {
        
        float area = 3.14 * (d * d)/4.0; 
        cout << setprecision(2) << fixed;
        cout << "ALTURA = " << (v/area) << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}