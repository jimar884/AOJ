//全ての結果を保存した配列を作ろうとするとエラー

#include <iostream>
using namespace std;

#define MAX 1000
#define HALF_SIZE MAX * 2

int main(void) {
	int table[HALF_SIZE + 1] = {};
	int n;
	int ans;
	
	for(int i = 0; i <= MAX; ++i) {
		for(int j = 0; j <= MAX; ++j) {
			++table[i + j];
		}
	}
	
	while(cin >> n) {
		ans = 0;
		if(n > HALF_SIZE) {
			for(int i = n - HALF_SIZE; i <= HALF_SIZE; ++i) {
				ans += table[i] * table[n - i];
			}
		} else {
			for(int i = 0; i <= n; ++i) {
				ans += table[i] * table[n - i];
			}
		}
		
		cout << ans << endl;
	}
	
	return 0;
}