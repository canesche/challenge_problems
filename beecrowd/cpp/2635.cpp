#include <iostream>

using namespace std;

int main() {

    int n, q, tam, tam_s, tam_p, count;
    bool diff;
    string p;

    while(cin >> n){
        string s[n];
        
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        cin >> q;

        for(int i = 0; i < q; i++){
            cin >> p;
            tam_p = p.size();
            
            count = 0;
            tam = 0;
            for(int z = 0; z < n; z++){
                tam_s = s[z].size();
                //cout << p[0] << " " << s[z][0] << endl;
                if(p[0] == s[z][0] && tam_p <= tam_s){
                    diff = false;
                    for(int l = 1; l < tam_p; l++){
                        //cout << p[l] << " " << s[z][l] << endl;
                        if(p[l] != s[z][l]){
                            diff = true;
                            break;
                        }
                    }
                    if(!diff){
                        count++;
                        if(tam < tam_s) tam = tam_s;
                    }
                }
            }
            if(tam == 0){
                cout << -1 << endl;
            } else {
                cout << count << " " << tam << endl;
            }
        }
        //cout << endl;
    }

    return 0;
}