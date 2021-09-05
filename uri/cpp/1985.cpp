#include <iostream>
#include <iomanip>

using namespace std;

float tipo_valor(int v){

    return (v % 10) + 0.50;
}

int main() {

    int n, p, qtd;
    float sum = 0;
    cin >> n;

    while(n > 0){
        
        cin >> p >> qtd;

        sum += tipo_valor(p) * qtd;
        n--;
    }

    cout << setprecision(2) << fixed << sum << endl;

    return 0;
}