#include <iostream>

using namespace std;

int main() {

    string d, l, p; // Dodô, Leo e Pepper
    const string v[4] = {"Os atributos dos monstros vao ser inteligencia, sabedoria...",
                         "Iron Maiden's gonna get you, no matter how far!",
                         "Urano perdeu algo muito precioso...",
                         "Putz vei, o Leo ta demorando muito pra jogar..."
                         };

    while(cin >> d >> l >> p){
        
        if(d == "papel" && l == "pedra" && p == "pedra") cout << v[0];
        else if(d == "pedra" && l == "papel" && p == "pedra") cout << v[1];
        else if(d == "pedra" && l == "pedra" && p == "papel") cout << v[2];
        else if(d == "tesoura" && l == "papel" && p == "papel") cout << v[0];
        else if(d == "papel" && l == "tesoura" && p == "papel") cout << v[1];
        else if(d == "papel" && l == "papel" && p == "tesoura") cout << v[2];
        else if(d == "pedra" && l == "tesoura" && p == "tesoura") cout << v[0];
        else if(d == "tesoura" && l == "pedra" && p == "tesoura") cout << v[1];
        else if(d == "tesoura" && l == "tesoura" && p == "pedra") cout << v[2];
        else cout << v[3];
        cout << endl;
    }

    return 0;
}