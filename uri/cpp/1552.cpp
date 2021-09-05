#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;

typedef pair<double,pair<int,int>> pi;

struct Pessoa {
    int x, y, id;
};

int parent[502];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void union_node(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void kruskal(int V, Pessoa *p) {
    double mincost = 0.0, min, dist;
    int diff_x, diff_y, a, b; 

    for (int i = 0; i < V; i++)
        parent[i] = i;
    
    priority_queue<pi, vector<pi>, greater<pi>> pq;

    for (int j = 0; j < V; ++j) {
        for (int k = j+1; k < V; ++k) {

            diff_x = p[j].x - p[k].x;
            diff_y = p[j].y - p[k].y;
            dist = sqrt(diff_x*diff_x + diff_y*diff_y);  
            
            pq.push(make_pair(dist,make_pair(j,k)));
        }
    }

    int c = 0;
    while (c < V-1) {
        dist = pq.top().first;
        a = pq.top().second.first;
        b = pq.top().second.second;
        pq.pop();

        if (find(a) != find(b)) {
            mincost += dist;
            union_node(a, b);
            ++c;
        } 
    }

    cout << fixed << setprecision(2) << mincost/100.0 << "\n";
}

int main() {

    int C, n, x, y, min;
    int diff_x, diff_y;
    double dist;
    Pessoa *p;

    cin >> C;

    for (int i = 0; i < C; ++i) {
        cin >> n;

        p = new Pessoa[n];

        // coleta os dados
        for (int j = 0; j < n; ++j) {
            cin >> x >> y;
            p[j].x = x;
            p[j].y = y;
        }
        
        kruskal(n, p);
    }

    return 0;
}