#include <iostream>

using namespace std;

int main() {

    string s[8] = {
        "<AMO FAZER EXERCICIO NO URI>",
        "<    AMO FAZER EXERCICIO NO URI>",
        "<AMO FAZER EXERCICIO >",
        "<AMO FAZER EXERCICIO NO URI>",
        "<AMO FAZER EXERCICIO NO URI    >",
        "<AMO FAZER EXERCICIO NO URI>",
        "<          AMO FAZER EXERCICIO >",
        "<AMO FAZER EXERCICIO           >"
    };

    for(int i = 0; i < 8; i++){
        cout << s[i] << endl;
    }

    return 0;
}