#include <iostream>

using namespace std;

int main() {

    int t, v;

    while(true){
        cin >> t;
        if(t == 0) break;

        for(int i = 0; i < t; i++){
            cin >> v;
            if(v % 2 == 0) cout << v*2-2 << endl;
            else cout << v * 2 - 1 << endl;
        }
    }

    return 0;
}