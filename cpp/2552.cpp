#include <iostream>

using namespace std;

int main() {

    int n, m, count;

    while(cin >> n >> m) {
        int v[n+2][m+2];
        for(int i = 0; i <= n+1; i++){
            for(int j = 0; j <= m+1; j++){
                if(i == 0 || j == 0 || i == n+1 || j == m+1)
                    v[i][j] = 0;
                else
                    cin >> v[i][j]; 
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                count = 0;
                if(v[i-1][j] == 1) count++;
                if(v[i][j-1] == 1) count++;
                if(v[i+1][j] == 1) count++;
                if(v[i][j+1] == 1) count++;

                if(v[i][j] == 0) cout << count;
                else cout << 9;
    
            }
            cout << endl;
        }
    }

    return 0;
}