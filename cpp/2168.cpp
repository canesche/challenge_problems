#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    char c[n][n];

    n += 1;

    int v[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    int cont = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            cont = 0;
            if(v[i][j] != 0) cont++;
            if(v[i][j+1] != 0) cont++;
            if(v[i+1][j] != 0) cont++;
            if(v[i+1][j+1] != 0) cont++; 

            if(cont >= 2){
                c[i][j] = 'S';
            } else {
                c[i][j] = 'U';
            }
        }
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            cout << c[i][j];
        }
        cout << endl;
    }

    return 0;
}