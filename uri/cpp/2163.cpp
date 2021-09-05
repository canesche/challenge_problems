#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    int v[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    int posx = 0, posy = 0;

    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < m-1; j++){
            if (v[i][j] == 42){
                if(v[i-1][j-1] == 7 && v[i-1][j] == 7 && v[i-1][j+1] == 7 &&
                   v[i][j-1] == 7 && v[i][j+1] == 7 && v[i+1][j-1] == 7 &&
                   v[i+1][j] == 7 && v[i+1][j+1] == 7){
                       posx = i+1;
                       posy = j+1;
                }
            }
        }
    }

    cout << posx << " " << posy << endl;

    return 0;
}