// pensando em uma solucao
#include <iostream>

using namespace std;

int main() {


    int n, t;
    while(true){
        cin >> n;
        if(n == 0) break;

        int sum = 0, ant = 0;;
        for(int i = 0; i < n; i++){
            cin >> t;
            if(t-ant >= 10) sum += 10;
            ant = ;
        }
        cout << sum << endl;
    }

    return 0;
}