#include <iostream>

using namespace std; 

int main() {

    int n, c, m;

    cin >> n >> c >> m;

    int x[c];
    for(int i = 0; i < c; i++)
        cin >> x[i];

    int y[m];
    for(int i = 0; i < m; i++)
        cin >> y[i];

    int sum = c;
    for(int i = 0; i < c; i++){
        bool tem = false;
        for(int j = 0; j < m; j++){
            if(x[i] == y[j]){ 
                tem = true;
                break;
            }
        }
        if(tem) sum--;
    }

    cout << sum << endl;

    return 0;
}