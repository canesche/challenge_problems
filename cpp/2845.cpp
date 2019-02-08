#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int v[n];

    int maior = -1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(maior < v[i])
            maior = v[i];
    }

    cout << maior+1 << endl;

    return 0;
}