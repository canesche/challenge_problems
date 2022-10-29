#include <iostream>

using namespace std;

int main(){

    int a, b, c, dab, dbc;

    cin >> a >> b >> c;

    dab = b - a;// 20 - 30 = -10
    dbc = c - b;// 10 - 20 = -10

    if(dab < 0 && dbc >= 0) cout << ":)";
    else if(dab >= 0 && dbc <= 0) cout << ":(";
    else if(dab > 0 && dbc > 0 && dab > dbc) cout << ":(";
    else if(dab > 0 && dbc > 0 && dab <= dbc) cout << ":)";
    else if(dab < 0 && dbc < 0 && dab < dbc) cout << ":)";
    else if(dab < 0 && dbc < 0 && dab >= dbc) cout << ":(";
    else if(dab == 0 && dbc > 0) cout << ":)";
    else if(dab == 0 && dbc < 0) cout << ":("; 
    cout << endl;

    return 0;
}