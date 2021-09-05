#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <queue>

#include <unordered_map>

#define INF 999999

using namespace std;

class Compare {
    public:
    bool operator() (pair<string,int> u, pair<string,int> v) {
        return u.second < v.second;
    }
};

typedef priority_queue<pair<string,int>, vector<pair<string,int>>, Compare> PQ;

int dijkstra(vector<pair<string, string>> &edge, 
            unordered_map<string, vector<string>> &m, 
            string origem, string destino) {

    unordered_map<string, int> dist;
    pair<string, int> p;
    string u, v;

    for (int i = 0, n = edge.size(); i < n; ++i) {
        dist[edge[i].first] = INF;
        dist[edge[i].second] = INF;
    }

    dist[origem] = 0;

    PQ pq;
    pq.push(make_pair(origem, 0));

    while (!pq.empty()) {
        p = pq.top();
        pq.pop();

        u = p.first;

        for (int i = 0, n = m[u].size(); i < n; ++i) {
            v = m[u][i];

            if (dist[v] > dist[u] + 1) {
                dist[v] = dist[u] + 1;
                pq.push(make_pair(v, dist[v]));
            }
        }
    }
    
    return dist[destino];
}

int main() {

    int p, l;
    string u, v;
    queue<string> q;
    int v0, v1;

    unordered_map<string, vector<string>> map;
    vector<pair<string, string>> edge;
    
    cin >> p >> l;

    for (int i = 0; i < l; ++i) {
        cin >> u >> v; 
        map[u].push_back(v);
        map[v].push_back(u); 
        edge.push_back(make_pair(u,v));
    }

    v0 = dijkstra(edge, map, "Entrada", "*");
    v1 = dijkstra(edge, map, "*", "Saida");

    cout << v0 + v1 << endl;

    return 0;
}
