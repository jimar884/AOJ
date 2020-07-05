#include <iostream>
#include <cstdio>
using namespace std;

#define HIGH 1000000;

int main(void) {
	double h;
	double max = 0;
	double min = HIGH;
	
	while(cin >> h) {
		if(h > max) {
			max = h;
		}
		if(h < min) {
			min = h;
		}
	}
	
	printf("%.1lf\n", max - min);
	
	return 0;
}