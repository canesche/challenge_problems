#include <iostream>

using namespace std;

int main() {

    int n;
    int m, l, esc_m, esc_l, atrib;
    
    while(cin >> n){
        cin >> m >> l;
        int cm[m][n], cl[l][n];
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> cm[i][j];
        
        for(int i = 0; i < l; i++)
            for(int j = 0; j < n; j++)
                cin >> cl[i][j];
        
        cin >> esc_m >> esc_l >> atrib;

        if(cm[esc_m-1][atrib-1] > cl[esc_l-1][atrib-1])
            cout << "Marcos" << endl;
        else if(cm[esc_m-1][atrib-1] < cl[esc_l-1][atrib-1])
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl; 
    }

    return 0;
}