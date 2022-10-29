#include <iostream>

using namespace std;

int main() {

    int n, f, v;

    while(cin >> n){
        f = 0;
        for(int i = 0; i < n; i++){
            cin >> v;
            if(v == 1) f++;
        }
        if(3*f >= 2*n) cout << "impeachment" << endl;
        else cout << "acusacao arquivada" << endl;
    }

    return 0;
}