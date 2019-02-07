#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    while(n > 0){
        string s;

        cin >> s;

        int a1 = 0, a2 = 0;
        bool ler = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'k') ler = false;
            if(ler && s[i] == 'a') a1++;
            else if(s[i] == 'a') a2++;
        }

        cout << "k";
        for(int i = 0; i < a1*a2; i++){
            cout << "a";
        }
        cout << endl;

        n--;
    }

    return 0;
}