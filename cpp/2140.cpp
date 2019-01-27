#include <iostream>

using namespace std;

int main() {

    int n, m, r, v;
    int notas[6] = {2, 5, 10, 20, 50, 100};

    cin >> n >> m;

    while(n != 0 || m != 0){

        r = m - n;

        int i = 0, j = 5;
        while(true){
            v = notas[i] + notas[j];
            if(r == v){
                cout << "possible" << endl;
                break;
            } else if(v > r){
                j--;
            } else if(v < r){
                i++;
            }
            if(i > j){
                cout << "impossible" << endl;
                break;
            }
        }

        cin >> n >> m;
    }

    return 0;
}