#include <iostream>

using namespace std;

int main() {

    int n;
    while(true){
        cin >> n;
        if(n == 0) break;

        int v[n];
        int c = 0;
        while(true){
            for(int i = 0; i < n; i++)
                cin >> v[i];
            bool teste = true;
            for(int i = 1; i < n-1; i++) {
                if(v[i] <= v[i-1] || v[i] >= v[i+1]){
                    teste = false;
                    break;
                }
            }
            if(n == 2 && v[0] >= v[1]) teste = false;
            c++;
            if(teste) break;
        }
        cout << c << endl;
    }

    return 0;
}