#include <iostream>

using namespace std;

int main() {

    int n, d, count, v;
    string s, sf;
    bool jafoi;

    while(cin >> n >> d){
        sf = "";
        jafoi = false;
        for(int i = 0; i < d; i++){
            cin >> s;
            count = 0;
            for(int j = 0; j < n; j++){
                cin >> v;
                if(v == 1) count++;
            }
            if(count == n && !jafoi) {
                sf = s;
                jafoi = true;
            }
        }
        if(sf != "") cout << sf << endl;
        else cout << "Pizza antes de FdI" << endl;
    }

    return 0;
}