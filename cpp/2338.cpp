// pensando em uma solucao
#include <iostream>

using namespace std;

string codifica(string s){
    string aux;
    for(int i = 0; i < s.size(); i++){
        if(i+3 < s.size()){
            aux = s[i]+s[i+1]+s[i+2];
        }
    }
    return "";
}

int main() {

    int t;
    cin >> t;
    string s;

    while(t > 0){

        cin >> s;

        cout << codifica(s) << endl;

        t--;
    }

    return 0;
}