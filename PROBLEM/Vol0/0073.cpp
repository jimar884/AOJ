#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void){
	double x, h, a; //x‚Í’ê–Ê‚Ì1•Ó‚Ì’·‚³Ah‚Í‚Ì‚‚³Aa‚Í‘¤–Ê‚Ì‚‚³
	
	while(cin >> x >> h) {
		if(x == 0 && h == 0) break;
		
		a = sqrt(h*h + x*x/4);
		
		double S = x*x + x*a*2;
		
		printf("%.6lf\n", S);
	}
	
	return 0;
}