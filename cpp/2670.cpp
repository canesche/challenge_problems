#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int menor = b * 2 + c * 4;

    if(menor > a * 2 + c * 2)
        menor = a * 2 + c * 2;
    if(menor > b * 2 + a * 4)
        menor = b * 2 + a * 4;

    cout << menor << endl;
    
    return 0;
}