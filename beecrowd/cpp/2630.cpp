#include <iostream>

using namespace std;

int main() {

    int n, r, g, b, j = 0, min;
    int v[3];
    string s;

    cin >> n;

    while(j < n){
        cin >> s;
        for(int i = 0; i < 3; i++)
            cin >> v[i];

        cout << "Caso #" << j+1 << ": ";

        if(s == "min") {
            min = v[0];
            for(int i = 1; i < 3; i++){
                if(min > v[i]) min = v[i];
            }
            cout << min << endl;
        } else if(s == "max") {
            min = v[0];
            for(int i = 1; i < 3; i++){
                if(min < v[i]) min = v[i];
            }
            cout << min << endl;
        } else if(s == "mean") {
            min = v[0];
            for(int i = 1; i < 3; i++)
                min += v[i];
            cout << (int) (min / 3.0) << endl;
        } else {
            min = (int) (0.3*v[0]+0.59*v[1]+0.11*v[2]);
            cout << min << endl;
        }

        j++;
    }

    return 0;
}