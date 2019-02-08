#include <iostream>

using namespace std;

int main() {

    string s = "234.345000 - 45.698000\n234 - 46\n234.3 - 45.7\n234.34 - 45.70\n234.345 - 45.698\n2.343450e+02 - 4.569800e+01\n2.343450E+02 - 4.569800E+01\n234.345 - 45.698\n234.345 - 45.698";

    cout << s << endl;

    return 0;
}