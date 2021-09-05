#include <iostream>

using namespace std;

int main() {

    int n, s, v;
    cin >> n >> s;

    int menor = s;
    int sum = s;
    for(int i = 0; i < n; i++){
        cin >> v;
        sum += v;
        if(menor > sum) menor = sum;
    }
    cout << menor << endl;

    return 0;
}