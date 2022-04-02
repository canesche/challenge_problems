#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>

using namespace std;

struct node {
    int v;
    vector<int> adj;
};

int main() {

    int t, n;
    cin >> t;

    for (int i = 0; i < t; ++i) {

        cin >> n;

        int f[n], p[n];

        node no[n+1];

        for (int j = 0; j < n; ++j) {
            cin >> f[i];
        }

        queue<int> q;

        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            
            no[j].v = f[j];
            if (temp != 0)
                no[temp-1].adj.push_back(j);
            else
                q.push(j);
        }

        while(!q.empty()) {
            int fila = q.front();
            q.pop();
            printf("node = %d\n", fila);

            for (auto e : no[0].adj) {
                int sum_v = 0;
                int v1 = no[e];
                
                if (v1.adj.size() == 1) {
                    sum_v += v1.v;
                } else {
                    v1
                }
                printf("adj %d\n", e);
            }
        }

        


        printf("Case #%d: %d\n", i+1, 0);
    }

    return 0;
}