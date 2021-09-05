#include <iostream>

using namespace std;

int main() {

    int n;
    int t, d;
    double rec;
    while(cin >> n){
        rec = 0.0;
        for(int i = 0; i < n; i++){
            cin >> t >> d;
            if(1.0*d/t > rec){
                rec = 1.0*d/t;
                cout << i+1 << endl;
            }
        }
        
    }

    return 0;
}