#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>
using namespace std;

#define N 8 //メリーゴーランドの台数

int M[N] = {4, 1, 4, 1, 2, 1, 2, 1};
int check_M[N] = {41412121, 14121214, 41212141, 12121414, 21214141,12141412, 21414121, 14141212};

int main(void) {
	int p[N]; //客の人数
	int min; //乗り損ねた客の最小人数
	
	while(cin >> p[0]) {
		for(int i = 1; i < N; ++i) {
			cin >> p[i];
		}
		
		int ans; //p[0]の客が乗るメリーゴーランドの番号
		min = INT_MAX;
		
		for(int i = 0; i < N; ++i) { //p[0]の客が乗るメリーゴーランドをM[i]とする
		int n = 0;
			for(int j = 0; j < N; ++j) {
				if(M[(i + j) % N] < p[j % N]) {
					n += p[j % N] - M[(i + j) % N];
				}
			}
			if(n < min) {
				min = n;
				ans = i;
			} else if(n == min) {
				if(check_M[i] < check_M[ans]) ans = i;
			}
		}
		
		cout << M[ans % N];
		for(int i = 1; i < N; ++i) {
			cout << ' ' << M[(ans + i) % N];
		}
		cout << endl;
	}
	
	return 0;
}