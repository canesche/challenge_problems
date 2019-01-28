/// pensando no problema
#include <iostream>

using namespace std;

int dist_interscecao(int *v1, int *v2){
    int tam;
    if(v1[0] < v2[0]) tam = v1[0];
    else tam = v2[0];

    int *inter = new int[tam];

    int c_igual, c_diff;
    for(int i = 1; i < v1[0]; i++){
        c_igual = 0;
        for(int j = 1; j < v2[0]; j++){
            if(v1[i] == v2[j]){
                c_igual++;
            }
        }
        if(c_igual == 0){
            c_diff++;
        }
    }
    return c_diff;
}

int main() {
    int t, n, q, aux, op, c1, c2;
    cin >> t;

    while(t > 0){

        cin >> n;
        int *v[n];
    
        for(int i = 0; i < n; i++){
            cin >> aux;
            v[i] = new int[aux];
            v[i][0] = aux;
            for(int j = 1; j < aux+1; j++){
                cin >> v[i][j];
            }
        }

        cin >> q;

        for(int i = 0; i < q; i++){
            cin >> op >> c1 >> c2;
            if(op == 1){
                for(int i = 1; i < v[c1][0]; i++){
                    for(int j = 1; j < v[c2][0]; j++){
                        if(v[c1][i] == )
                    }
                }
            } else {

            }
        }

        t--;
    }
}