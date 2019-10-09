#include <iostream>

using namespace std;

int main(){
    int n;
    
    while (true) {
        cin >> n;
        if (n == 0) break;
        
        int v[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; ++j) {
                v[i][j] = 0;
            }
        }

        for (int c = 0; c < 1; c++){
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; ++j) {
                    v[i][j] += 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; ++j) {
                cout << "   " << v[i];
            }
            cout << endl;
        }
        cout << endl;
    }
}