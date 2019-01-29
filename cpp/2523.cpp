#include <iostream>

using namespace std;

int main() {

    string s, ns;
    int v;
    int n;

    while(cin >> s >> n){
        ns = "";
        for (int i = 0; i < n; i++){
            cin >> v;
            ns += s[v-1];
        }
        cout << ns << endl;
    }

    return 0;
}