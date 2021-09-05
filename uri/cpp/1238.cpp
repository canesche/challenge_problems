#include <iostream>

using namespace std;

int main() {

    int n;
    string s1, s2;

    cin >> n;

    while(n > 0){
        cin >> s1 >> s2;

        int menor = s1.size();
        if(menor > s2.size()) menor = s2.size();

        for(int i = 0; i < menor; i++){
            cout << s1[i] << s2[i];
        }

        if(menor == s1.size()){
            for(int i = menor; i < s2.size(); i++)
                cout << s2[i];
        } else {
            for(int i = menor; i < s1.size(); i++)
                cout << s1[i];
        }
        cout << endl;
        n--;
    }

    return 0;
}