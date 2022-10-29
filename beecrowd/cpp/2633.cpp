#include <iostream>

using namespace std;

class itens{
    public:
        int data;
        string nome;
};

int main() {

    int n, d;
    string s;
    bool ja;

    while(cin >> n){
        itens v[n];
        for(int i = 0; i < n; i++){
            cin >> s >> d;
            if(i == 0){
                v[0].data = d;
                v[0].nome = s;
            } else {
                for(int j = 0; j < i; j++){
                    ja = false;
                    if(d < v[j].data){
                        //cout << j << endl;
                        for(int z = i-1; z >= j; z--){
                            v[z+1].data = v[z].data;
                            v[z+1].nome = v[z].nome;
                        }
                        v[j].data = d;
                        v[j].nome = s;

                        ja = true;
                        break;
                    }
                }
                if(!ja){
                    v[i].data = d;
                    v[i].nome = s;
                }
            }
            /*for(int j = 0; j <= i; j++){
                cout << v[j].nome;
                if(j != i-1) cout << " "; 
            }
            cout << endl;*/
        }

        for(int i = 0; i < n; i++){
            cout << v[i].nome;
            if(i != n-1) cout << " "; 
        }
        cout << endl;

    }


    return 0;
}