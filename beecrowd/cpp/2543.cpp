#include <iostream>

using namespace std;

int main() {

    int n, id, v, sum, j;

    while(cin >> n >> id){
        sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v >> j;
            if(id == v && j == 0){
                sum += 1;
            }
        }
        cout << sum << endl;
    }

    return 0;
}