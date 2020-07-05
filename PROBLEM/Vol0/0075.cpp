#include <iostream>
#include <cstdio>
using namespace std;

#define N 50 //¶“k‚ÌÅ‘ål”

int main(void) {
	int s;
	double w, h;
	int id[N];
	int count = 0;
	
	while(scanf("%d,%lf,%lf", &s, &w, &h) != EOF) {
		double BMI = w / (h * h);
		if(BMI >= 25) {
			id[count] = s;
			++count;
		}
	}
	
	for(int i = 0; i < count; ++i) {
		cout << id[i] << endl;
	}
	
	return 0;
}