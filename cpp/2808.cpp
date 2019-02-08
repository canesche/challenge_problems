#include <iostream>

using namespace std;

int main() {

    string a, b;

    cin >> a >> b;

    int na = abs(a[0] - b[0]);
    int nb = abs(a[1] - b[1]);

   // cout << na << " " << nb << endl;

    if(na == 0 || nb == 0)
        cout << "INVALIDO" << endl;
    else if(na > 2 || nb > 2)
        cout << "INVALIDO" << endl;
    else if(na == nb)
        cout << "INVALIDO" << endl;
    else
        cout << "VALIDO" << endl;
    
    return 0;
}