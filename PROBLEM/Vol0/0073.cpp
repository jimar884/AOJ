#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void){
	double x, h, a; //xは底面の1辺の長さ、hは錐の高さ、aは側面の高さ
	
	while(cin >> x >> h) {
		if(x == 0 && h == 0) break;
		
		a = sqrt(h*h + x*x/4);
		
		double S = x*x + x*a*2;
		
		printf("%.6lf\n", S);
	}
	
	return 0;
}