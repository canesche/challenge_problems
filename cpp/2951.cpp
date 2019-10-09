#include <iostream>

struct temp {
    char key;
    int value;
};

using namespace std;

int main() {

    int n, g;

    cin >> n >> g;

    struct temp teste[n];

    for (int i = 0; i < n; ++i) {
        cin >> teste[i].key >> teste[i].value;
    }

    int v;
    cin >> v;
    int sum = 0;
    char a;

    for (int i = 0; i < v; ++i) {
        cin >> a;
        for (int j = 0; j < n; ++j) {
            if (a == teste[j].key) {
                sum += teste[j].value;
                break;
            }
        }
    }

    cout << sum << endl;
    if (sum >= g) {
        cout << "You shall pass!" << endl;
    } else {
        cout << "My precioooous" << endl;
    }

    return 0;
}