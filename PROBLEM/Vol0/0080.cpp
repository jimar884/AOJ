#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
	double x;
	long long q;
	
	while(cin >> q) {
		if(q == -1) break;
		
		x = (double)q / 2;
		
		while(abs(x*x*x - q) > (double)q / 100000) {
			x = x - (x*x*x - q) / (3*x*x);
		}
		
		printf("%.6lf\n", x);
	}
	
	return 0;
}