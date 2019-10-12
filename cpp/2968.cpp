// shows wrong error 15%
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int v, n;

    cin >> v >> n;

    float p = v * n;

    const float meta[9] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9};

    for (int i = 0; i < 9; ++i) {
        cout << ceil(meta[i]*p);
        if (i == 8) cout << endl;
        else cout << " ";
    } 
}