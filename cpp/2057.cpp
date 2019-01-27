#include <iostream>

using namespace std;

int main() {

    int s, t, f;

    cin >> s >> t >> f;

    int res = (s + t + f) % 24;
    if (res < 0) res += 24;

    cout << res << endl;

    return 0;
}