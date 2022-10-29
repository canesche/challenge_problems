#include <iostream>

using namespace std;

int main() {

    int n, tam;

    while(cin >> n){
        tam = n / 3;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if (i == n/2 && j == n/2 && n % 2 != 0) cout << 4;
                else if(i >= tam && i < n-tam && j >= tam && j < n-tam) cout << 1;
                else if(i == j) cout << 2;
                else if(i+j == n-1) cout << 3;
                else cout << 0;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}