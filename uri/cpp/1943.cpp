#include <iostream>

using namespace std;

int main() {

    int v[7] = {1, 3, 5, 10, 25, 50, 100};

    int k;
    cin >> k;

    for(int i = 0; i < 7; i++)
        if(k <= v[i]){
            cout << "Top " << v[i] << endl;
            break;
        }

    return 0;
}