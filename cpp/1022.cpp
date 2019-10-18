#include <iostream>

using namespace std;

int mdc(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {

    int n1, d1, n2, d2, num, den, q, m;
    char c1, c2, c3;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        cin >> n1 >> c1 >> d1 >> c2 >> n2 >> c3 >> d2;
        
        switch (c2) {
            case '+':
                num = n1 * d2 + n2 * d1;
                den = d1 * d2; 
                break;
            case '-':
                num = n1 * d2 - n2 * d1;
                den = d1 * d2;
                break;
            case '*':
                num = n1 * n2;
                den = d1 * d2;
            case '/':
                num = n1 * d2;
                den = n2 * d1;
            default:
                break;
        }

        m = mdc(num, den);

        cout << num << "/" << den << " = ";

        int num1 = num/m;
        int den1 = den/m;
        if (den1 < 0)
            cout << -num1 << "/" << -den1 << endl;  
        else
            cout << num1 << "/" << den1 << endl;  
    }

    return 0;
}