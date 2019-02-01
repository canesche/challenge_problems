#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c;
    while(true){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        int v = cbrt(1.0*a * b * c);
        cout << v << endl;
    }

    return 0;
}