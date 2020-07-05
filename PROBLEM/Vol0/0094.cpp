#include <iostream>
#include <cstdio>
using namespace std;

#define TSUBO 3.305785

int main(void) {
	int a, b;
	double S;
	
	cin>> a >> b;
	
	S = a * b;
	
	printf("%.6lf\n", S / TSUBO);
	
	return 0;
}