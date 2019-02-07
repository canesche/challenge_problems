#include <iostream>

using namespace std;

int main() {

    long long int m, n;

    string s;

    while(true){
        cin >> m >> n;
        if(m == 0 && n == 0) break;

        s = to_string(m + n);

        for(int i = 0; i < s.size(); i++){
            if(s[i] != '0') cout << s[i];
        }
        cout << endl;

    }


    return 0;
}