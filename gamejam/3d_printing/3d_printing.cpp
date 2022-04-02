#include <iostream>

using namespace std;



int main() {

    int n;
    long long m[3][4];
    cin >> n;

    for (int k = 0; k < n; ++k) {

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> m[i][j];
            }
        }

        printf("Case #%d: ", k+1);

        long long v[4];

        for (int j = 0; j < 4; ++j) {
            v[j] = m[0][j];
        }

        for (int i = 1; i < 3; ++i) {
            for (int j = 0; j < 4; ++j) {
                v[j] = min(v[j],m[i][j]);
            }
        }

        long sum = v[0] + v[1] + v[2] + v[3];

        if (sum < 1000000)
            printf("IMPOSSIBLE\n");
        else if (sum == 1000000)
            printf("%d %d %d %d\n", v[0], v[1], v[2], v[3]);
        else {
            
            //printf("%d %d %d %d\n", v[0], v[1], v[2], v[3]);

            long diff = sum - 1000000;
            
            for (int i = 0; i < 4; ++i) {
                //printf("%d\n", diff);
                if (diff == 0)
                    break;
                if (diff >= v[i]) {
                    diff -= v[i];
                    v[i] = 0;
                } else {
                    v[i] -= diff;
                    diff = 0;
                }
            }
            
            printf("%d %d %d %d\n", v[0], v[1], v[2], v[3]);
        }
    }

    return 0;
}