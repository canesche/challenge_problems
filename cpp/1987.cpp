#include <iostream>

using namespace std;

int main() {

    int n;
    string s;
    int sum;

    while(cin >> n >> s){
        sum = 0;
        for(int i = 0; i < n; i++){
            sum += (s[i]-'0');
        }
        cout << sum;

        if(sum % 3 == 0)
            cout << " sim" << endl;
        else
            cout << " nao" << endl;
    }

}