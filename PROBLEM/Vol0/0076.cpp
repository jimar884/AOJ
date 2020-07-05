#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
	int n;
	double x, y;
	double a, b, c;
	double sin, cos;
	
	while(cin >> n) {
		if(n == -1) break;
		
		x = 1;
		y = 0;
		//ˆäŒË‚ğ’†S‚ÉˆÚ“®‚·‚é
		for(int i = 0; i < n - 1; ++i) {
			a = sqrt(x*x + y*y); //Œ»İ’n‚ÆˆäŒË‚Ì‹——£
			b = sqrt(a*a + 1*1); //ˆÚ“®Œã‚ÆˆäŒË‚Ì‹——£
			c = 1; //ˆÚ“®‹——£
			cos = (a*a + b*b - c*c) / (2*b*a); //—]Œ·’è—
			sin = sqrt(1 - cos*cos);
			double X = (x*cos - y*sin) * (b / a);
			double Y = (x*sin + y*cos) * (b / a);
			x = X;
			y = Y;
		}
		
		printf("%.2lf\n%.2lf\n", x, y);
	}
	
	return 0;
}