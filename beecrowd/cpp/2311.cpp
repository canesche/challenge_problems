#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin >> n;

    string nome;
    float gd;
    float nota[7];
    float aux;
    double sum;

    while(n > 0){
        cin >> nome;
        cin >> gd;
        for(int i = 0; i < 7; i++)
            cin >> nota[i];
        
        for(int i = 0; i < 6; i++){
            for(int j = i+1; j < 7; j++){
                if(nota[i] > nota[j]){
                    aux = nota[i];
                    nota[i] = nota[j];
                    nota[j] = aux;
                }
            }
        }
        
        sum = 0;
        for(int i = 1; i < 6; i++)
            sum += nota[i];
        
        cout << setprecision(2) << fixed;
        cout << nome << " " << sum * gd << endl;

        n--;
    }

    return 0;
}