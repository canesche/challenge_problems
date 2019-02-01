#include <iostream>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main() {

    int v[6];
    int asc[6];

    for(int i = 0; i < 5; i++){
        cin >> v[i];
        asc[i] = v[i];
    }

    qsort(asc, 5, sizeof(int), compare);
    
    bool ordem_asc = true;
    bool ordem_des = true;
    for(int i = 0; i < 5; i++){
        if(v[i] != asc[i]){
            ordem_asc = false;
        }
        if(v[i] != asc[5-i-1]){
            ordem_des = false;
        }
    }

    if(ordem_asc) cout << "C" << endl;
    else if(ordem_des) cout << "D" << endl;
    else cout << "N" << endl;

    return 0;
}