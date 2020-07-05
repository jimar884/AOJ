#include <iostream>
#include <algorithm>
using namespace std;

#define N 1000

int main(void) {
	char field[N][N];
	int n;
	int ans;
	
	//int table[N][N];　で初期化宣言するとメモリ不足でエラー
	int **table = new int*[N];
	for(int i = 0; i < N; ++i) table[i] = new int[N];
	
	while(cin >> n) {
		if(n == 0) break;
		
		for(int i = 0; i < n; ++i) cin >> field[i];
		
		for(int i = 0; i < n; ++i) {
			table[0][i] = (field[0][i] == '.') ? 1 : 0;
			table[i][0] = (field[i][0] == '.') ? 1 : 0;
		}
		
		ans = 0;
		for(int i = 1; i < n; ++i) {
			for(int j = 1; j < n; ++j) {
				if(field[i][j] == '.') {
					table[i][j] = min(table[i - 1][j - 1], min(table[i - 1][j], table[i][j - 1]));
					table[i][j] += 1;
					ans = max(ans, table[i][j]);
				} else {
					table[i][j] = 0;
				}
			}
		}
		
		cout << ans << endl;
	}
	
	for(int i = 0; i < N; ++i) delete [] table[i];
	delete [] table;
	
	return 0;
}