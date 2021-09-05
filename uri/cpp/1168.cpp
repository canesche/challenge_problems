#include <iostream>
#include <cstring>

using namespace std;

int qtd_leds(char v){
    switch (v) {
        case '0': return 6; break;
        case '1': return 2; break;
        case '2': return 5; break;
        case '3': return 5; break;
        case '4': return 4; break;
        case '5': return 5; break;
        case '6': return 6; break;
        case '7': return 3; break;
        case '8': return 7; break;
        case '9': return 6; break;
        default: return 0;
    }
}

int main() {

    int n;
    cin >> n;

    string v;
    while(n > 0){
        cin >> v;
        int long sum = 0;

        for(int i = 0; i < v.size(); i++){
            sum += qtd_leds(v[i]); 
        }

        cout << sum << " leds" << endl;

        n--;
    }

    return 0;
}