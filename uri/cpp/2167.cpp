#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int anterior = -1;
    int posterior = -1;
    int queda = 0;

    bool achei = true;
    int i = 1;

    while(n > 0){
        anterior = posterior;
        cin >> posterior;
        
        if(posterior < anterior && achei){
            queda = i;
            achei = false;
        }

        i++;
        n--;
    }

    cout << queda << endl;

    return 0;
}