#include <iostream>

using namespace std;

int main() {

    char var[3];

    for(int i = 0; i < 3; i++) cin >> var[i];

    
    cout << "A = " << var[0] << ", B = " << var[1] << ", C = " << var[2] << endl;
    cout << "A = " << var[1] << ", B = " << var[2] << ", C = " << var[0] << endl; 
    cout << "A = " << var[2] << ", B = " << var[0] << ", C = " << var[1] << endl;  

    return 0;
}