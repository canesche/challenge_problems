#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int r, l;
    cin >> r >> l;

    double vol = 4.0/3.0 * 3.1415 * pow(r, 3); 

    //cout << vol << endl;

    int res = l / vol;

    cout << res << endl;

    return 0;
}