#include <iostream>

using namespace std;

int main() {

    int a = 97;
    for(int i = 0; i < 26; i++){
        cout << a+i << " e " << (char) ('a'+i) << endl;
    }

    return 0;
}