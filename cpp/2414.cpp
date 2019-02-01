#include <iostream>

using namespace std;

int main() {

    int n, maior = 0;
    while(true){
        cin >> n;
        if(n == 0) break;
        if(maior < n) maior = n;
    }

    cout << maior << endl;

    return 0;
}