#include <iostream>

using namespace std;

int main() {

    int n, a_min, a_max, v, sum;

    while(cin >> n >> a_min >> a_max){
        sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v;
            if(v >= a_min && v <= a_max) sum++;
        }

        cout << sum << endl;
    }

    return 0;
}