#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    if(n >= 1) a[0] = 1;
    if(n >= 2) a[1] = 1;

    for(int i = 2; i < n; i++){
        a[i] = a[i-1] + a[i-2];
    }

    for(int i = n-1; i >= 0; i--){
        cout << a[i];
        if(i != 0) cout << " ";
    }
    cout << endl; 

    return 0;
}