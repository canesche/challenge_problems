#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    while(n > 0){

        int a, b;

        cin >> a >> b;
        int sum = 0;

        int aux = (a <= b) ? a : b;
        int maior = 1;

        for(int i = 2; i <= aux; i++){
            if(a % i == 0 && b % i == 0){
                maior = i;
            }
        }       
    
        cout << maior << endl;
        n--;
    }

    return 0;
}