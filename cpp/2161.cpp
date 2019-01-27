#include <iostream>
#include <iomanip>

using namespace std;

long double calcula(int n){
    if(n == 1){
        return 1.0/6;
    } 
    return 1 / (6 + calcula(n-1));
}

int main() {

    double res;
    int n;
    cin >> n;

    res = 3;
    if(n > 0)
        res += calcula(n);

    cout << setprecision(10) << fixed << res << endl;

    return 0;
}