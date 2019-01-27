#include <iostream>

using namespace std;

int main() {

    int n, m;
    string a;

    cin >> n >> m;

    while(m > 0){

        cin >> a;

        if( a == "fechou" ){
            n++;
        } else {
            n--;
        }

        m--;
    }

    cout << n << endl;

    return 0;
}