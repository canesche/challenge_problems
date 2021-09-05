#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	int d_ab = abs(a - b);
	int d_ac = abs(a - c);
	int d_ad = abs(a - d);
	int d_bc = abs(b - c);
	int d_bd = abs(b - d);
	int d_cd = abs(c - d);
	
	if(
		(d_bc<a && a<b+c) || (d_ac<b && b<a+c) || (d_ab<c && c<a+b) ||
		(d_bd<a && a<b+d) || (d_ad<b && b<a+d) || (d_ab<d && d<a+b) ||
		(d_cd<a && a<c+d) || (d_ad<c && c<a+d) || (d_ac<d && d<a+c) ||
		(d_cd<b && b<c+d) || (d_bd<c && c<b+d) || (d_bc<d && d<b+c)
	){
		cout << "S" << endl;
	} else 
		cout << "N" << endl; 
	
	return 0;
}
