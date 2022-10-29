#include <iostream>

using namespace std;

int main() {

    int n, h, m, o;
    cin >> n;

    while(n > 0){
        
        cin >> h >> m >> o;
        
        if(h < 10) cout << "0";
        cout << h << ":";
        if(m < 10) cout << "0";
        cout << m;

        cout << " - A porta ";
        if(o == 1)
            cout << "abriu!" << endl;
        else 
            cout << "fechou!" << endl;

        n--;
    } 

    return 0;
}