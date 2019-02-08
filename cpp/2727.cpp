// ainda verificando um problema no getline
#include <iostream>

using namespace std;

void imprime(string s){
    if(s == ".") cout << "a" << endl;
    else if(s == "..") cout << "b" << endl;
    else if(s == "...") cout << "c" << endl;
    else if(s == ". .") cout << "d" << endl;
    else if(s == ".. ..") cout << "e" << endl;
    else if(s == "... ...") cout << "f" << endl;
    else if(s == ". . .") cout << "g" << endl;
    else if(s == ".. .. ..") cout << "h" << endl;
    else if(s == "... ... ...") cout << "i" << endl;
    else if(s == ". . . .") cout << "j" << endl;
    else if(s == ".. .. .. ..") cout << "k" << endl;
    else if(s == "... ... ... ...") cout << "l" << endl;
    else if(s == ". . . . .") cout << "m" << endl;
    else if(s == ".. .. .. .. ..") cout << "n" << endl;
    else if(s == "... ... ... ... ...") cout << "o" << endl;
    else if(s == ". . . . . .") cout << "p" << endl;
    else if(s == ".. .. .. .. .. ..") cout << "q" << endl;
    else if(s == "... ... ... ... ... ...") cout << "r" << endl;
    else if(s == ". . . . . . .") cout << "s" << endl;
    else if(s == ".. .. .. .. .. .. ..") cout << "t" << endl;
    else if(s == "... ... ... ... ... ... ...") cout << "u" << endl;
    else if(s == ". . . . . . . .") cout << "v" << endl;
    else if(s == ".. .. .. .. .. .. .. ..") cout << "x" << endl;
    else if(s == "... ... ... ... ... ... ... ...") cout << "y" << endl;
    else if(s == ". . . . . . . . .") cout << "z" << endl;
}

int main() {

    int n;
    string s;

    while(cin >> n){
        for(int i = 0; i < n; i++){
            getline(cin, s);
            imprime(s);
        }
    }
    return 0;
}