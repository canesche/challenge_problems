#include <iostream>
#include <cmath>

using namespace std;

class Pointer {
    public:
        int x, y;
};

int main() {

    Pointer p[2];
    int dist;
    int n, m;
    while(cin >> n >> m){
        int v[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[i][j];
                if(v[i][j] == 1){
                    p[0].x = i;
                    p[0].y = j;
                } else if(v[i][j]){
                    p[1].x = i;
                    p[1].y = j;
                }
            }
        }

        dist = abs(p[1].x-p[0].x) + abs(p[1].y-p[0].y);

        cout << dist << endl;

    }

    return 0;
}