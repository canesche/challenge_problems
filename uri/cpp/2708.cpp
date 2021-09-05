#include <iostream>

using namespace std;

int main() {

    int t;
    string s;

    int qtd_jipe = 0, qtd_turista = 0;

    while(true){
        cin >> s;
        if(s == "ABEND") break;
        cin >> t;

        if(s == "SALIDA") {
            qtd_jipe += 1;
            qtd_turista += t;
        } else {
            qtd_jipe -= 1;
            qtd_turista -= t;
        }
    }

    cout << qtd_turista << endl;
    cout << qtd_jipe << endl;

    return 0;
}