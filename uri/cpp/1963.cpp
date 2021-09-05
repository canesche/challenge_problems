#include <iostream>
#include <iomanip>
#include <stdio.h>


using namespace std;

int main(){
	
	double a, b;
	
	cin >> a >> b;
	
	double r = b - a;
	
	printf("%.2f%%\n",(r/a)*100.00);
	
	return 0;
}
