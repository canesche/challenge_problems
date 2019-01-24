#include <iostream>

using namespace std;

int main() {

    string a;
    int b;

    while(cin >> a){

        b = ((a[0]-'0')-7) * 60 + (a[2]-'0') * 10 + (a[3]-'0');

        if (b < 0) b = 0;

        cout << "Atraso maximo: " << b << endl;
    }

    return 0;
}