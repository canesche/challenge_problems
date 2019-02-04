#include <iostream>

using namespace std;

int main() {

    int n;
    int a[3], menor;
    int b[3];

    while(cin >> n){
        cin >> a[0] >> a[1] >> a[2];
        
        b[0] = a[0]; b[1] = a[1]; b[2] = a[2];

        while(b[0] != b[1] || b[1] != b[2]){
            //cout << b[0] << "," << b[1] << "," << b[2] << endl;
            menor = 0;
            if(b[menor] > b[1]) menor = 1;
            if(b[menor] > b[2]) menor = 2;

            //cout << menor << endl;

            b[menor] += a[menor];
        }
        cout << b[0] - n << endl;
    }

    return 0;
}