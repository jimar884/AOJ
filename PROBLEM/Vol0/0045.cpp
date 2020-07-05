#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct product {
	int price;
	int n;
};

int main(void) {
	struct product A[100];
	int count = 0;
	int sum_p = 0;
	int sum_n = 0;
	double ave_n;
	
	while(scanf("%d,%d", &A[count].price, &A[count].n) != EOF) {
		sum_p += A[count].price * A[count].n;
		sum_n += A[count].n;
		++count;
	}
	
	cout << sum_p << endl;
	ave_n = (double)sum_n / count;
	cout << round(ave_n) << endl;
	
	return 0;
}