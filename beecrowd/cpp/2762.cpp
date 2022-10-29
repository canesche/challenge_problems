#include <iostream>
#include <string>

using namespace std;

int main() {

    string x;

    cin >> x;
    int v[2];

    int pos = 0;

    string s = "";
    for(int i = 0; i < x.size(); i++){
        if(x[i] != '.'){
            s += x[i];
        } else {
            v[0] = atoi(s.c_str());
            pos = i+1;
            break;
        }
    }

    s = "";
    for(int i = pos; i < x.size(); i++){
        s += x[i];
    }
    v[1] = atoi(s.c_str());

    cout << v[1] << "." << v[0] << endl;

    return 0; 
}