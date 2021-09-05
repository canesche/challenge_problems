#include <iostream>

using namespace std;

string calcula(int m, int d){

    int dias_mes[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    int cont = dias_mes[m-1] - d;
    for(int i = m; i < 12; i++){
        cont += dias_mes[i];
    }

    return to_string(cont);
}

int main() {

    int a, b;
    while(cin >> a >> b){
        if(a == 12 && b == 25) {
            cout << "E natal!" << endl;
        } else if(a == 12 && b > 25) {
            cout << "Ja passou!" << endl;
        } else if(a == 12 && b == 24) {
            cout << "E vespera de natal!" << endl;
        } else {
            cout << "Faltam " << calcula(a, b) << " dias para o natal!" << endl;
        }
    }

    return 0;
}