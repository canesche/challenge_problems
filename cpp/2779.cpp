#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> f;
    int n, m;

    cin >> n >> m;

    int cont = n;
    int aux;
    for(int i = 0; i < m; i++){
        cin >> aux;
        if(f.size() == 0) {
            f.push_back(aux);
            cont--;
        } else {
            bool tem = false;
            for(int j = 0; j < f.size(); j++){
                if(f[j] == aux) {
                    tem = true;
                    break;
                }
            }
            if(!tem){
                f.push_back(aux);
                cont--;
            }
        }
    }

    cout << cont << endl;

    return 0;
}