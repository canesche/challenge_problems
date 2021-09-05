#include <iostream>

using namespace std;

int main(){
    int n, r;
    
    while (true) {
        cin >> n;
        if (n == 0) break;
        
        int v[n][n];

        if(n%2 == 0)
            r = n/2;
        else
            r = n/2 + 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; ++j) {
                v[i][j] = 1;
            }
        }

        for(int c = 1; c < r; c++){
			for(int i = c; i < n-c; i++){
				for(int j = c; j < n-c; j++){
					v[i][j] = c+1;
				}
			}
		}

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; ++j) {
                if (j == 0)
                    printf("%3d", v[i][j]);
                else
                    printf(" %3d", v[i][j]);
            }
            cout << endl;
        }
        cout << endl;
    }
}