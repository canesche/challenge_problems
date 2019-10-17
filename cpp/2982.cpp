#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    char c;
    int v;

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> c >> v;
        if (c == 'G')
            sum -= v;
        else
            sum += v;
    }

    if (sum >= 0)
        cout << "A greve vai parar." << endl;
    else
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
}