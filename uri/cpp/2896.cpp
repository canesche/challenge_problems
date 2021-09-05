#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t > 0){

        int n, k;
        cin >> n >> k;

        int menor = n;
        if(menor > k) menor = k;

        //if(2*k > n) cout << menor << endl;
        //else 
        cout << (n / k) + (n % k) << endl;

        t--;
    }

    return 0;
}