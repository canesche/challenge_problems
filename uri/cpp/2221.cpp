#include <iostream>

using namespace std;

int main() {

    int t, b, a1, d1, l1, a2, d2, l2;
    double vg1, vg2;
    cin >> t;

    while(t > 0){
        cin >> b;
        cin >> a1 >> d1 >> l1;
        cin >> a2 >> d2 >> l2;

        vg1 = (a1 + d1)/2.0;
        vg2 = (a2 + d2)/2.0;

        if(l1 % 2 == 0){
            vg1 += b;
        } 
        if(l2 % 2 == 0) {
            vg2 += b;
        }

        if(vg1 == vg2){
            cout << "Empate" << endl;
        } else if(vg1 > vg2) {
            cout << "Dabriel" << endl;
        } else {
            cout << "Guarte" << endl;
        }

        t--;
    }

    return 0;
}