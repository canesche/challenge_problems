#include <iostream>

using namespace std;

int main() {

    int n, q, t, v;
    bool menor;

    while(cin >> n >> q){
        int nota[n+1];
        for(int i = 0; i < n; i++){
            cin >> v;
            if(i == 0){ 
                nota[1] = v;
                nota[0] = 2;
            } else {
                menor = true;
                for(int j = 1; j < nota[0]; j++){
                    if(v > nota[j]){
                        for(int k = nota[0]; k > j; k--)
                            nota[k] = nota[k-1];

                        menor = false;
                        nota[j] = v;
                        nota[0]++;

                        break;
                    }
                }
                if(menor){
                    nota[nota[0]] = v;
                    nota[0]++;
                }
            }
            /*   
            for(int t = 0; t < nota[0]; t++){
                cout << nota[t] << " ";
            }
            cout << endl;
            */
        }
        for(int i = 0; i < q; i++){
            cin >> t;
            cout << nota[t] << endl;
        }
    }

    return 0;
}