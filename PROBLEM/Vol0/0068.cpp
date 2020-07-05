#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
	double x[100];
	double y[100];
	int n;
	
	while(cin >> n) {
		if(n == 0)   break;
		double steep = 100000;
		double min_cos = 1;
		double naiseki;
		double line1, line2;
		double cos;
		int start;
		int min_x1 = 0;
		int min_x2 = 0;
		int next;
		int remove = 1;
		for(int i = 0; i < n; ++i) {
			scanf("%lf,%lf", &x[i], &y[i]);
			if(x[i] < x[min_x1])   min_x1 = i;
			else if(x[i] == x[min_x1] && y[i] < y[min_x1])   min_x1 = i;
		}
		start = min_x1;
		
		for(int i = 0; i < n; ++i) {
			if(x[i] == x[min_x1])   continue;
			if((y[i] - y[min_x1]) / (x[i] - x[min_x1]) < steep) {
				steep = (y[i] - y[min_x1]) / (x[i] - x[min_x1]);
				min_x2 = i;
			}
		}
		
		while(next != start) {
			min_cos = 1;
			for(int i = 0; i < n; ++i) {
				if(i == min_x1 || i == min_x2)   continue;
				naiseki = (x[i] - x[min_x2]) * (x[min_x1] - x[min_x2]) + (y[i] - y[min_x2]) * (y[min_x1] - y[min_x2]);
				line1 = sqrt(pow(x[i] - x[min_x2], 2.0) + pow(y[i] - y[min_x2], 2.0));
				line2 = sqrt(pow(x[min_x1] - x[min_x2], 2.0) + pow(y[min_x1] - y[min_x2], 2.0));
				cos = naiseki / (line1 * line2);
				if(cos < min_cos) {
					min_cos = cos;
					next = i;
				}
			}
			min_x1 = min_x2;
			min_x2 = next;
			++remove;
		}
		
		cout << n - remove << endl;
	}
}