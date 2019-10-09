#include <iostream>

using namespace std;

int main() {

    int n, v, a;
    cin >> n;

    cin >> v;
    bool maior = true;

    for (int i = 0; i < n-1; ++i) {
        cin >> a;
        if (v < a) 
            maior = false;
    }

    if (maior) 
        cout << "S" << endl;
    else    
        cout << "N" << endl;

    return 0;
}