#include <iostream>

using namespace std;

int main() {

    const string s[] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int c;
            cin >> c;
            cout << s[c-1] << endl;
        }
    }

    return 0;
}