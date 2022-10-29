#include <iostream>

using namespace std;

int main() {

    int v, t, f;
    cin >> v >> t;

    for(int i = 0; i < t; i++){
        cin >> f;
        v += f;
        if(v > 100) v = 100;
        if(v < 0) v = 0;
    }

    cout << v << endl;

    return 0;
}