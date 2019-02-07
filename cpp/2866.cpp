#include <iostream>

using namespace std;

int main() {
    int n;
    string s, p;
    cin >> n;

    while(n > 0){
        cin >> s;

        p = "";
        for(int i = 0; i < s.size(); i++){
            int a = 'Z' - s[i];
            if(a < 0){
                p += s[i];
            }
        }

        for(int i = p.size()-1; i >= 0; i--)
            cout << p[i];
        cout << endl;

        n--;
    }
}