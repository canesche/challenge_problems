// shows wrong error 15%
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int v, n;

    cin >> v >> n;

    int p = v * n;

    for (int i = 1; i < 10; ++i) {
        cout << ceil(0.1*i*p);
        if (i == 9) cout << endl;
        else cout << " ";
    } 
}