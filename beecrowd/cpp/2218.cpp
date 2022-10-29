#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int t;
    cin >> t;

    int v;
    for(int i = 0; i < t; i++) {
        cin >> v;
        if(v == 1) cout << 2 << endl;
        else {
            int ant = 1;
            for(int i = 1; i <= v; i++){
                ant += i;
            }
            cout << ant << endl;
        }
    }

    return 0;
}