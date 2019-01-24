#include <iostream>

using namespace std;

int main() {

    int r, v, sum = 0;
    cin >> r;

    for(int i = 0; i < 5; i++) {
        cin >> v;
        if(v == r)
            sum += 1;
    }

    cout << sum << endl;

    return 0;
}