#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    string a;
    cin >> n;

    while(n > 0) {
        cin >> a;
        cout << setprecision(2) << fixed << a.size() * 0.01 << endl;
        n--;
    }

    return 0;
}