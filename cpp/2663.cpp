#include <iostream>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main() {

    int n, min, a, sum = 0;
    cin >> n;

    int v[n];

    cin >> min;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    qsort(v, n, sizeof(int), compare);

    sum = min;
    for(int i = n-1-min; i >= 0; i--){
        if(v[n-1-min+1] == v[i]) sum++;
        else break;
    }

    cout << sum << endl;
    
    return 0;
}