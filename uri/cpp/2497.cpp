#include <iostream>

using namespace std;

int main() {

    int n;
    int i = 1;
    while(true){
        cin >> n;
        if(n == -1) break;

        cout << "Experiment "<< i <<": "<< n/2 <<" full cycle(s)" << endl;
        i++;
    }

    return 0;
}