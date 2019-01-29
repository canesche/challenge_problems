#include <iostream>

using namespace std;

int main() {

    int n, aux, sum;
    while(cin >> n){

        aux = n;
        sum = -1;

        while(aux > 0){
            aux /= 2;
            sum++;
        }

        cout << sum << endl;
    }

    return 0;
}