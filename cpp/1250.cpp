#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    while(n > 0){

        int j;
        cin >> j;
        int v[j];
        for(int i = 0; i < j; i++)
            cin >> v[i];
        string s;
        cin >> s;
        
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'S' && v[i] < 3) sum++;
            else if(s[i] == 'J' && v[i] > 2) sum++;
        }
        cout << sum << endl;

        n--;
    }

    return 0;
}