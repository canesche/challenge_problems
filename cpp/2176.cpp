#include <iostream>

using namespace std;

int main() {

    string s;
    cin >> s;

    int cont = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') cont++;
    }

    if(cont % 2 == 0){
        cout << s << "0" << endl;
    } else {
        cout << s << "1" << endl;
    }

    return 0;
}