#include <iostream>

using namespace std;

int main() {

    unsigned long long int n;

    while(true){
        cin >> n;
        if(n == -1)
            break;
        if(n != 0) --n;
        cout << n << endl;
    }

    return 0;
}