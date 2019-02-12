#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> s;
    string a;

    while(cin >> a){
        bool tem = true;
        for(int i = 0; i < s.size(); i++){
            if(a == s[i]){
                tem = false;
                break;
            }
        }
        if(!tem){
            s.push_back(a);
        }
    }
    cout << s.size() << endl;

    return 0;
}