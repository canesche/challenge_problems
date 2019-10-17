#include <iostream>

using namespace std;

int main() {

    int n, a, b, sum_a, sum_b;
    while (true) {
        sum_a = 0, sum_b = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; ++i) {
            cin >> a >> b;
            if (a-b > 0) sum_a++;
            else if(b-a>0) sum_b++;
        } 
        cout << sum_a << " " << sum_b << endl;
    }

    return 0;
}