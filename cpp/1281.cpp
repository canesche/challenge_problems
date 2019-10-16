// pensando
#include <iostream>
#include <iomanip>

using namespace std;

struct cesta {
    string nome;
    double valor;
    int qtd;
};

int main() {

    int n;
    cin >> n;
    string name;
    int qtd;
    double total;

    while(n > 0){

        int m;
        cin >> m;

        cesta c[m];

        for (int i = 0; i < m; ++i) {
            cin >> c[i].nome >> c[i].valor;
            c[i].qtd = 0;  
        }

        int p;
        cin >> p;

        total = 0.0;
        for (int i = 0; i < p; i++) {
            cin >> name >> qtd;
            for (int j = 0; j < m; ++j) {
                if (c[j].nome == name) {
                    c[j].qtd += qtd;
                    total += c[j].qtd * c[j].valor;
                    break;
                }
            }
        }

        cout << fixed;
        cout << setprecision(2) << "R$ " << total << endl;

        n--;
    }


    return 0;
}