#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++){
        int v;
        cin >> v;
        if(v != 1) sum++;
    }

    cout << sum << endl;

    return 0;
}