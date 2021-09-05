#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    while(n > 0){

        int l;
        cin >> l;

        string s[l];
        for(int i = 0; i < l; i++)
            cin >> s[i];
        
        int sum = 0;
        for(int i = 0; i < l; i++){
            for(int j = 0; j < s[i].size(); j++){
                sum += (s[i][j]-'A') + i + j;
            }
        }

        cout << sum << endl;

        n--;
    }

    return 0;
}