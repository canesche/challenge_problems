/*
problema com o caso
12
1231321455123214565423112
*/

#include <iostream>

using namespace std;

int main() {

    string n1, n2;
    int c = 1, pos, count;
    bool eh;

    while(cin >> n1 >> n2) {

        pos = -1;
        count = 0;
        eh = true;
        for(int i = 0; i < n2.size(); i++){
            if(n1[0] == n2[i]){
                //cout << n1[0] << " " << n2[i] << endl;
                for(int j = 1; j < n1.size(); j++){
                    if(n1[j] != n2[i+j]){ // i+j > n2.size() && 
                        eh = false;
                        break;
                    }
                }
                if(eh){
                    count++;
                    pos = i+1;
                }
            }
        }

        cout << "Caso #" << c++ << ":" << endl;
        if(pos == -1){
            cout << "Nao existe subsequencia" << endl;
        } else {
            cout << "Qtd.Subsequencias: " << count << endl;
            cout << "Pos: " << pos << endl;
        }
        cout << endl;
    }

    return 0;
}