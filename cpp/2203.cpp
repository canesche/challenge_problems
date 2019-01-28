// nao resolvido ainda
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int xf, yf, xi, yi, vi, r1, r2;
    int x2, y2;
    int xt, yt;
    double dist;

    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2 ) {

        x2 = xi + vi * 1.5;
        y2 = yi + vi * 1.5;

        dist = sqrt(pow(xf-x2,2)+pow(yf-y2,2));

        cout << dist << " " << r1 << " " << r2 << endl;

        if(dist <= r1+r2){
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}