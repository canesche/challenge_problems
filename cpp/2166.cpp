#include <iostream>
#include <iomanip>

using namespace std;

double calcula(int n){
    if(n == 1)
        return 1/2.0;
    return 1/(2 + calcula(n-1));
}

int main() {

    int n;
    cin >> n;

    double v = 1;
    if(n > 0) v += calcula(n);

    cout << setprecision(10) << fixed << v << endl;

    return 0;
}