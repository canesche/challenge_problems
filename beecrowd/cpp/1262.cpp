#include <iostream>

using namespace std;

int main() {

    string s;
    int c, t, l;
    while(cin >> s){
        c = 0;
        l = 0;
        cin >> t;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'W'){ 
                c++;
                l = 0;
            } else if(s[i] == 'R' && l < t){
                if(l == 0) c++;
                l++;
            } else {
                l = 1;
                c++;
            }
        }

        cout << c << endl;
    }

    return 0;
}