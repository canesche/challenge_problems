#include <iostream>

using namespace std;

int main() {

    int sum = 0, a;

    for (int i = 0; i < 5; ++i) {
        cin >> a;
        switch (i) {
            case 0:
                sum += a * 300;
                break;
            case 1:
                sum += a * 1500;
                break;
            case 2:
                sum += a * 600;
                break;
            case 3:
                sum += a * 1000;
                break;
            case 4:
                sum += a * 150;
            default:
                break;
        }
    }

    cout << sum + 225 << endl;

    return 0;
}