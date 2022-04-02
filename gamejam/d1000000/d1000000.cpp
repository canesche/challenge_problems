#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, d;
    cin >> n;

    for (int i = 0; i < n; ++i) {

        cin >> d;
        long long v[d];
        for (int j = 0; j < d; ++j) {
            cin >> v[j]; 
        }

        sort(v, v + d);

        int c_max = 0, c;
        int start = 0;
        bool finish = false;
        while (true) {
            c = 0;
            for (int j = 0; j < d-start; ++j) {
                if (j+1 <= v[j+start]) {
                    ++c;
                    if (j == d-1-start) {
                        finish = true;
                        break;
                    }
                } else {
                    ++start;
                    break;
                }
            }
            c_max = max(c, c_max);
            if (finish)
                break;
        }

        printf("Case #%d: %d\n", i+1, c_max);

    }

    return 0;
}