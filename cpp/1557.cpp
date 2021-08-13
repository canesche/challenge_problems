#include <iostream>
#include <iomanip>
#include <math.h> 

using namespace std;

int main() {

    int n;
    int maior, tam;

    while (true) {
        cin >> n;
        if (n == 0) break;

        int m[n][n];    

        m[0][0] = 1;
        maior = 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 && j == 0) {
                    m[i][j] = 1;
                }     
                else if (i == 0) {
                    m[i][j] = m[i][j-1] * 2;
                } else {
                    m[i][j] = m[i-1][j] * 2;
                }
                maior = max(maior, m[i][j]);
            }
        }
        
        tam = 0;
        while(maior != 0) {
            maior = maior / 10;
            tam++;
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j == 0) {
                    printf("%*d", tam, m[i][j]);
                } else {
                    printf(" %*d", tam, m[i][j]);
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}