#include <iostream>
#include <vector>
#include <algorithm> 
#include <queue>
#include <unordered_map> 

using namespace std;

int main() {

    int N, V, E, counter;
    char u, v, c, v1, v2;

    vector<char> elem;
    queue<char> q;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> V >> E;
        unordered_map<char,vector<char>> list;
        bool pass[V];

        for (int j = 0; j < V; ++j) {
            c = 'a' + j;
            list[c].push_back(c);
            pass[j] = false;
        }

        for (int j = 0; j < E; ++j) {
            cin >> u >> v;
            list[u].push_back(v);
            list[v].push_back(u);
        }

        counter = 0;
        cout << "Case #" << i+1 << ":" << endl;
        
        for (int j = 0; j < V; ++j) {
            if (pass[j]) continue;
            
            q.push('a'+j);

            while (!q.empty()) {
                
                v1 = q.front();
                q.pop();

                if (pass[v1-'a']) continue;
                pass[v1-'a'] = true;

                elem.push_back(v1);

                for (int k = 0, n = list[v1].size(); k < n; ++k) {
                    v2 = list[v1][k];
                    if (pass[v2-'a']) continue;
                    q.push(v2);
                }
            }

            sort(elem.begin(), elem.end());
            
            for (int k = 0; k < elem.size(); ++k)
                cout << elem[k] << ",";
            cout << endl;

            elem.clear();
            counter++;
        }
        cout << counter << " connected components\n" << endl;
    }
}
