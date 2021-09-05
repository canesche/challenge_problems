#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    while(n > 0){

        int v;
        cin >> v;

        if(v <= 8000){
            cout << "Inseto!" << endl;
        } else {
            cout << "Mais de 8000!" << endl;
        }

        n--;
    }


    return 0;
}