#include <iostream>

using namespace std;

int main() {

    string const rena[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};

    int sum = 0;
    int v;

    for(int i = 0; i < 9; i++){
        cin >> v;
        sum += v;
    }

    cout << rena[(sum-1) % 9] << endl;

    return 0;
}