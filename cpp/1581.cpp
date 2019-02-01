#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    string s, fala;

    for(int i = 0; i < n; i++){
        int qtd;
        cin >> qtd;
        for(int j = 0; j < qtd; j++){
            cin >> s;
            if(j == 0) fala = s;
            else {
                if(fala == "ingles") continue;
                else if(s != fala) fala = "ingles";
            }
        }
        cout << fala << endl;
    }

    return 0;
}