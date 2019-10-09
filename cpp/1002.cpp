#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double raio, area;
    cin >> raio;
    area = raio * raio * 3.14159;
    cout << "A=" << fixed << setprecision(4) << area << endl;
 
    return 0;
}