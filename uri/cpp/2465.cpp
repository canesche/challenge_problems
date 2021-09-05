#include <iostream>
#include <vector>

using namespace std;

struct point{
    int x, y;
};

bool jafoi(vector<point> v, int x, int y){
    for(int i = 0; i < v.size(); i++){
        if(v[i].x == x && v[i].y == y)
            return true;
    }
    return false;
}

int main() {

    vector<point> f;

    int n;
    cin >> n;

    int v[n+2][n+2];

    int l, k;
    cin >> l >> k;

    for(int i = 0; i < n+2; i++) {
        for(int j = 0; j < n+2; j++){
            if(i == 0 || j == 0 || i == n+1 || j == n+1)
                v[i][j] = 0;
            else
                cin >> v[i][j]; 
        }
    }

    f.push_back({l,k});
    int sum = 1;
    int i = 0;
    while(true){
        l = f[i].x;
        k = f[i].y;
        //cout << v[l][k] << " " << v[l][k+1] << endl;
        if(v[l][k] <= v[l][k+1] && !jafoi(f,l,k+1)){
            f.push_back({l,k+1});
            sum++;
        }
        //cout << v[l][k] << " " << v[l+1][k] << endl;
        if(v[l][k] <= v[l+1][k] && !jafoi(f,l+1,k)){
            f.push_back({l+1,k});
            sum++;
        }
        //cout << v[l][k] << " " << v[l][k-1] << endl;
        if(v[l][k] <= v[l][k-1] && !jafoi(f,l,k-1)){
            f.push_back({l,k-1});
            sum++;
        }
        //cout << v[l][k] << " " << v[l-1][k] << endl;
        if(v[l][k] <= v[l-1][k] && !jafoi(f,l-1,k)){
            f.push_back({l-1,k});
            sum++;
        }
        //cout << f.size() << " " << l << " " << k << endl;
        //f.erase(f.begin());
        //break;
        i++;
        if(i > f.size()-1) break;
    }

    cout << sum << endl;

    return 0;
}