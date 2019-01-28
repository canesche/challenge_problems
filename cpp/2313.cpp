#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c;
    int qa, qb, qc;

    cin >> a >> b >> c;

    if(a < b + c || b < a + c || c < a + b){
        cout << "Invalido" << endl;
    } else {
        if(a != b && a != c && b != c)
            cout << "Valido-Escaleno" << endl;
        else if(a == b && b == c)
            cout << "Valido-Equilatero" << endl;
        else 
            cout << "Valido-Isoceles" << endl;
        
        qa = pow(a, 2);
        qb = pow(b, 2);
        qc = pow(c, 2);

        if(qa == qb + qc || qb == qa + qc || qc == qa + qb)
            cout << "Retangulo: S" << endl;
        else
            cout << "Retangulo: N" << endl;
    }

    return 0;
}