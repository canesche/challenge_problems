// pensando...
#include <iostream>

using namespace std;

int main() {

    int n, f, r, a ,b, c;
    cin >> n >> f >> r;

    int city[n];
    for(int i = 0; i < n; i++)
        city[i] = 0;

    int sumf = 0;
    for(int i = 0; i < f; i++){
        cin >> a >> b >> c;
        city[a-1]++;
        city[b-1]++;
        sumf += c;
    }

    for(int i = 0; i < n; i++){
        if(city[i] == 0){
            sumf = 0;
            break;
        }
    }

    for(int i = 0; i < n; i++)
        city[i] = 0;
    
    int sumr = 0;
    for(int i = 0; i < r; i++){
        cin >> a >> b >> c;
        city[a-1]++;
        city[b-1]++;
        sumr += c;
    }

    for(int i = 0; i < n; i++){
        if(city[i] == 0){
            sumf = 0;
            break;
        }
    }

    if(sumf == 0) cout << sumr << endl;
    else if(sumr == 0) cout << sumf << endl;

    return 0;
}