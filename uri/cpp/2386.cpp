#include <iostream>

using namespace std;

int main() {

    long int a, v;
    cin >> a;
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(a * v >= 40000000) sum++;
    }

    cout << sum << endl;

    return 0;
}