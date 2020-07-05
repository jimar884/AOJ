#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void){
	double x, h, a; //x�͒�ʂ�1�ӂ̒����Ah�͐��̍����Aa�͑��ʂ̍���
	
	while(cin >> x >> h) {
		if(x == 0 && h == 0) break;
		
		a = sqrt(h*h + x*x/4);
		
		double S = x*x + x*a*2;
		
		printf("%.6lf\n", S);
	}
	
	return 0;
}