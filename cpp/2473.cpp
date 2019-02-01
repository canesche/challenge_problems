#include <iostream>

using namespace std;

int main() {

    int v[6];
    int c[6];
    int sum = 0; 

    for(int i = 0; i < 6; i++)
        cin >> v[i];
    
    for(int i = 0; i < 6; i++)
        cin >> c[i];

    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            if(v[i] == c[j]){
                sum++;
                break;
            }

    if(sum > 5) cout << "sena" << endl;
    else if(sum > 4) cout << "quina" << endl;
    else if(sum > 3) cout << "quadra" << endl;
    else if(sum > 2) cout << "terno" << endl;
    else cout << "azar" << endl;

    return 0;
}