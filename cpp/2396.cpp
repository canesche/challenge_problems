#include <iostream>

using namespace std;

class comp {
    public:
        int pos;
        int value;
};

int main() {

    int n, m;
    cin >> n >> m;

    comp v[3] = {{0,0}, {0,0}, {0,0}};

    comp c;

    for(int i = 0; i < n; i++){
        int sum = 0;
        int valor;
        for(int j = 0; j < m; j++){
            cin >> valor;
            sum += valor;
        }

        //cout << i+1 << " " << sum << endl;

        c.pos = i+1;
        c.value = sum;

        if(i == 0){ 
            v[0].pos = 1;
            v[0].value = sum;
        } else {
            for(int j = 0; j < 3; j++){
                if(c.value < v[j].value) {
                    for(int k = 1; k >= j; k--){
                        v[k+1].pos = v[k].pos;
                        v[k+1].value = v[k].value;
                    }
                    v[j].pos = c.pos;
                    v[j].value = c.value;
                    break;
                } else if(v[j].value == 0){
                    v[j].pos = c.pos;
                    v[j].value = c.value;
                    break;
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        cout << v[i].pos << endl;
    }

    return 0;
}