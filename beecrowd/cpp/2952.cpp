#include <iostream>

using namespace std;

int main() {

    int n;
    char s;
    cin >> n;

    int v[n];

    if (n == 0) 
        cout << "0 0" << endl;
    else {
        for (int i = 0; i < n; ++i) {
            cin >> s;
            switch (s) {
                case 'A':
                    v[i] = -50; break;
                case 'C':
                    v[i] = -13500; break;
                case 'S':
                    v[i] = -2000; break; 
                case 'P':
                    v[i] = 13000; break;
                case 'M':
                    v[i] = -550; break;
                case 'K':
                    v[i] = -20; break;
                case 'B':
                    v[i] = 40; break;
                default: // case N
                    v[i] = 0; break;
            }
        }

        for (int i = 0; i < N; ++i) {
            
        }

    }

    return 0;
}