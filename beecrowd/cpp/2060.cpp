#include <iostream>

using namespace std;

int main() {

    int n; 
    cin >> n;

    int v[4];
    for(int i = 0; i < 4; i++)
        v[i] = 0;

    int a;
    while(n > 0){
        cin >> a;
        if(a % 2 == 0) v[0]++;
        if(a % 3 == 0) v[1]++;
        if(a % 4 == 0) v[2]++;
        if(a % 5 == 0) v[3]++;
        n--;
    }

    cout << v[0] << " Multiplo(s) de 2\n";
    cout << v[1] << " Multiplo(s) de 3\n";
    cout << v[2] << " Multiplo(s) de 4\n";
    cout << v[3] << " Multiplo(s) de 5" << endl;   

    return 0;
}