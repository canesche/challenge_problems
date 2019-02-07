#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    string s1, s2;

    while(n > 0){

        cin >> s1 >> s2;

        if(s2.size() > s1.size()) cout << "nao encaixa" << endl;
        else {
            bool eh_igual = true;
            for(int i = 0; i < s2.size(); i++){
                //cout << s1[s1.size()-s2.size()+i] << " " << s2[i] << endl;
                if(s1[s1.size()-s2.size()+i] != s2[i]){
                    eh_igual = false;
                    break;
                }
            }
            if(eh_igual) cout << "encaixa" << endl;
            else cout << "nao encaixa" << endl;
        }
        

        n--;
    }

    return 0;
}