#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a, b;
    cin >> a >> b;

    if(a+b > n) 
        cout << "Deixa para amanha!" << endl;
    else
        cout << "Farei hoje!" << endl;

    return 0;
}