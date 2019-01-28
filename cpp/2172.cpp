#include <iostream>

using namespace std;

int main() {

    int x;
    long int m;

    cin >> x >> m;
    while(x != 0 && m != 0) {
        
        cout << x * m << endl;

        cin >> x >> m;
    }

    return 0;
}