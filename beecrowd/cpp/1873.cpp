#include <iostream>

using namespace std;

int main() {

    string s1, s2;
    int n;
    cin >> n;

    while(n > 0){
        cin >> s1 >> s2;

        if(s1 == s2) cout << "empate" << endl;
        else if(s1 == "tesoura" && s2 == "papel") cout << "rajesh" << endl;
        else if(s2 == "tesoura" && s1 == "papel") cout << "sheldon" << endl;
        else if(s1 == "papel" && s2 == "pedra") cout << "rajesh" << endl;
        else if(s2 == "papel" && s1 == "pedra") cout << "sheldon" << endl;
        else if(s1 == "pedra" && s2 == "lagarto") cout << "rajesh" << endl;
        else if(s2 == "pedra" && s1 == "lagarto") cout << "sheldon" << endl;
        else if(s1 == "lagarto" && s2 == "spock") cout << "rajesh" << endl;
        else if(s2 == "lagarto" && s1 == "spock") cout << "sheldon" << endl;
        else if(s1 == "spock" && s2 == "tesoura") cout << "rajesh" << endl;
        else if(s2 == "spock" && s1 == "tesoura") cout << "sheldon" << endl;
        else if(s1 == "tesoura" && s2 == "lagarto") cout << "rajesh" << endl;
        else if(s2 == "tesoura" && s1 == "lagarto") cout << "sheldon" << endl;
        else if(s1 == "lagarto" && s2 == "papel") cout << "rajesh" << endl;
        else if(s2 == "lagarto" && s1 == "papel") cout << "sheldon" << endl;
        else if(s1 == "papel" && s2 == "spock") cout << "rajesh" << endl;
        else if(s2 == "papel" && s1 == "spock") cout << "sheldon" << endl;
        else if(s1 == "spock" && s2 == "pedra") cout << "rajesh" << endl;
        else if(s2 == "spock" && s1 == "pedra") cout << "sheldon" << endl;
        else if(s1 == "pedra" && s2 == "tesoura") cout << "rajesh" << endl;
        else if(s2 == "pedra" && s1 == "tesoura") cout << "sheldon" << endl;
        else cout << "WTF = " << s1 << " " << s2 << endl;

        n--;
    }

    return 0;
}