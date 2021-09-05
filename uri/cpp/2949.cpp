#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int v[5];

    for (int i = 0; i < 5; ++i)
        v[i] = 0;

    string a;
    char b;

    for (int i = 0; i < n; ++i){
        cin >> a >> b;
        if (b == 'X') v[0]++;
        else if (b == 'H') v[1]++;
        else if (b == 'E') v[2]++;
        else if (b == 'A') v[3]++;
        else if (b == 'M') v[4]++;
    }

    cout << v[0] << " Hobbit(s)\n";
    cout << v[1] << " Humano(s)\n";
    cout << v[2] << " Elfo(s)\n";
    cout << v[3] << " Anao(s)\n";
    cout << v[4] << " Mago(s)\n";

    return 0;
}