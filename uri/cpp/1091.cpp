#include <iostream>

using namespace std;

int main() {

    int k;

    while(true){
        cin >> k;
        if(k == 0) break;
        int n, m;
        cin >> n >> m;
        int x, y;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            if(x == n || y == m) cout << "divisa" << endl;
            else if(x > n && y > m) cout << "NE" << endl;
            else if(x < n && y > m) cout << "NO" << endl;
            else if(x < n && y < m) cout << "SO" << endl;
            else cout << "SE" << endl;
        }
    }

    return 0;
}