#include <iostream>

using namespace std;

bool verifica(string a, string b){

    if (a == "ataque" && b == "pedra")
        cout << "Jogador 1 venceu" << endl;
    else if (b == "ataque" && a == "pedra")
        cout << "Jogador 2 venceu" << endl;
    else if (a == "pedra" && b == "papel")
        cout << "Jogador 1 venceu" << endl;
    else if (b == "pedra" && a == "papel")
        cout << "Jogador 2 venceu" << endl;
    else if (a == "papel" && b == "ataque")
        cout << "Jogador 2 venceu" << endl;
    else if (b == "papel" && a == "ataque")
        cout << "Jogador 1 venceu" << endl;
    else if (a == "papel" && b == "papel")
        cout << "Ambos venceram" << endl;
    else if (a == "pedra" && b == "pedra")
        cout << "Sem ganhador" << endl;
    else // ataque x ataque
        cout << "Aniquilacao mutua" << endl;
}

int main() {

    int n;
    string a, b;
    cin >> n;

    while(n > 0){
        cin >> a >> b;

        verifica(a, b);

        n--;
    }

    return 0;
}