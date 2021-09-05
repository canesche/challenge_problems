#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int m;
    double n, c;
    double sum_nc;
    double sum_c;

    while (cin >> m){

        sum_nc = 0;
        sum_c = 0;

        for(int i = 0; i < m; i++){
            cin >> n >> c;
            sum_c += c;
            sum_nc += n * c;
        }

        cout << setprecision(4) << fixed;
        cout << sum_nc / (sum_c * 100) << endl;
    }

    return 0;
}