#include <iostream>

using namespace std;

const string v[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE",
                      "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

int main() {

    int c, x, y;
    cin >> c;


    while(c > 0){

        cin >> x >> y;

        cout << v[x+y] << endl;

        c--;
    }

    return 0;
}