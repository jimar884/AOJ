#include <iostream>
using namespace std;

#define N 20

int main(void) {
	int n;
	int p[N + 1]; //添え字が参加者番号、値は釣った匹数
	int a, v;
	int ans;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i) {
		cin >> a >> v;
		p[a] = v;
	}
	
	ans = 1;
	for(int i = 1; i <= n; ++i) {
		if(p[ans] < p[i]) ans = i;
	}
	
	cout << ans << ' ' << p[ans] << endl;
	
	return 0;
}