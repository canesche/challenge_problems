#include <iostream>

using namespace std;

int main() {

    string s[9] = {
        	"       A",
            "      B B",
            "     C   C",
            "    D     D",
            "   E       E",
            "    D     D",
            "     C   C",
            "      B B",
            "       A"};

    for(int i = 0; i < 9; i++)
        cout << s[i] << endl;
    

    return 0;
}