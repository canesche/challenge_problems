#include <iostream>

using namespace std;

int main() {

    int n, t;
    cin >> n;

    string s;

    while(n > 0){

        cin >> s >> t;

        for(int i = 0; i < s.size(); i++){
            int z = (s[i]-t);
            if(z - 'A' < 0) z = 'Z'+(z-'A')+1; 
            cout << (char)z;
        }
        cout << endl;

        n--;
    }


    return 0;
}