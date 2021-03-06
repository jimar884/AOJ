#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

#define N 100 //史跡の数

int main(void) {
	int n, m;
	int a, b, d;
	int road[N][N]; //添え字から添え字への距離を1/100に縮小したもの
	bool ruin[N]; //通った史跡はtrue
	int count; //通った史跡の数
	int ans; //灯篭の数
	int min_a, min_b;
	
	while(true) {
		cin >> n;
		if(n == 0) break;
		
		//初期化
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				road[i][j] = INT_MAX;
			}
			ruin[i] = false;
		}
		count = 0;
		ans = 0;
		
		cin >> m;
		
		for(int i = 0; i < m; ++i) {
			scanf("%d,%d,%d", &a, &b, &d);
			road[a][b] = road[b][a] = d / 100;
		}
		
		ruin[0] = true; //始点は0
		++count; //始点をカウント
		while(count != n) {
			min_a = min_b = 0; //road[0][0]はINT_MAXだから番兵として利用
			for(int i = 0; i < n; ++i) {
				if(ruin[i]) {
					for(int j = 0; j < n; ++j) {
						if(road[i][j] < road[min_a][min_b] && !ruin[j]) {
							min_a = i;
							min_b = j;
						}
					}
				}
			}
			
			ans += road[min_a][min_b] - 1;
			ruin[min_b] = true;
			++count;
			road[min_a][min_b] = road[min_b][min_a] = INT_MAX;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}