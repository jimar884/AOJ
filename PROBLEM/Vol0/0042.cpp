#include <iostream>
#include <cstdio>
using namespace std;

int W;
int N;

struct treasure {
	int v;
	int w;
};

treasure A;

void steal(treasure t[], int sum_v, int sum_w, int i) {
	if(i < N && sum_w <= W) {
		steal(t, sum_v, sum_w, i + 1);
		steal(t, sum_v + t[i].v, sum_w + t[i].w, i + 1);
	} else {
		if((sum_v > A.v && sum_w <= W) || (sum_v == A.v && sum_w < A.w)) {
			A.v = sum_v;
			A.w = sum_w;
		}
	}
}

int main(void) {
	treasure t[1000];
	int n = 1;
	
	while(true) {
		A.v = 0;
		A.w = 0;
		
		cin >> W;
		
		if(W == 0) {
			break;
		}
		
		cin >> N;
		
		for(int i = 0; i < N; ++i) {
			scanf("%d,%d", &t[i].v, &t[i].w);
		}
		
		steal(t, 0, 0, 0);
		
		cout << "Case " << n << ':' << endl;
		cout << A.v << endl << A.w << endl;
		
		++n;
	}
	
	return 0;
}