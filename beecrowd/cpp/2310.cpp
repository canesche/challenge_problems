#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 0;
    int s = 0, b = 0, a = 0, s1 = 0, b1 = 0, a1 = 0;
    int v1, v2, v3, v4, v5, v6;
    string nome;
    while(i < n){
        cin >> nome;
        cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6;
        s += v1;
        b += v2;
        a += v3;
        s1 += v4;
        b1 += v5;
        a1 += v6;
        i++;
    }

    double ps = 100.0 * s1 / s;
    double pb = 100.0 * b1 / b;
    double pa = 100.0 * a1 / a;

    cout << setprecision(2) << fixed;
    cout << "Pontos de Saque: " << ps << " \%." << endl;
    cout << "Pontos de Bloqueio: " << pb << " \%." << endl;
    cout << "Pontos de Ataque: " << pa << " \%." << endl;

    return 0;
}