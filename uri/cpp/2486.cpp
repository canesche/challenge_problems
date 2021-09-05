#include <iostream>

using namespace std;

int vitc(string s){
    if(s == " suco de laranja") return 120;
    else if(s == " morango fresco") return 85;
    else if(s == " mamao") return 85;
    else if(s == " goiaba vermelha") return 70;
    else if(s == " manga") return 56;
    else if(s == " laranja") return 50;
    else return 34;
}

int main() {

    int t, i, res;
    string s;
    int qtd; 

    while(true){
        cin >> t;
        if(t == 0) break;

        i = 0, res = 0;
        while(i < t){
            cin >> qtd;
            getline(cin, s);
            res += qtd * vitc(s);
            i++; 
        }

        if(res >= 110 && res <= 130){
            cout << res;
        } else if(res < 110) {
            cout << "Mais " << 110 - res;
        } else {
            cout << "Menos " << res - 130;
        }

        cout << " mg" << endl;
    }

    return 0;
}