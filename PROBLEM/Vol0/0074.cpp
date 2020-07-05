#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 7200 //テープの容量（秒）

//nは何倍録画かを指定する。
void solve(int time, int n) {
	int ans = (MAX - time) * n;
	int h, m, s;
	h = ans / 3600;
	ans -= h * 3600;
	m = ans / 60;
	ans -= m * 60;
	s = ans;
	
	printf("%02d:%02d:%02d\n", h, m, s);
}

int main(void) {
	int T, H, S;
	int time;
	int ans;
	
	while(cin >> T >> H >> S) {
		if(T == -1 && H == -1 && S == -1) break;
		
		time = T * 3600 + H * 60 + S;
		
		solve(time, 1);
		solve(time, 3);
	}
	
	return 0;
}