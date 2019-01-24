#include <iostream>

using namespace std;

int v[201];

int fibo(int v[], int n){
    if(v[n] != 0){
        return v[n];
    } 
    return fibo(v, n-1) + n;
}

int main() {

    int n, i = 0;

    v[0] = 1;
    for(int i = 1; i < 201; i++){
        v[i] = 0;
    }

    while(cin >> n) {
        int qtd = fibo(v,n);
        
        cout << "Caso " << ++i << ": " << qtd << " numero";
        if(qtd > 1) cout << "s";
        cout << endl;
        cout << 0;
        if(n != 0) cout << " ";
        for(int i = 0; i <= n; i++){
            for(int j = 0; j < i; j++){
                cout << i;
                if (j != n-1) cout << " ";
            }
        }
        cout << endl << endl;
    }

    return 0;
}