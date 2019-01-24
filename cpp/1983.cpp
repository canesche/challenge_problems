#include <iostream>

using namespace std;

int main(){

    int n, v;
    float maior = -1;
    float nota;
    cin >> n;
    while(n > 0){

        cin >> v >> nota;

        if(nota >= 8.0 && maior < v) maior = v;

        n--;
    }

    if(maior != -1) cout << maior << endl;
    else cout << "Minimum note not reached" << endl;

    return 0;
}