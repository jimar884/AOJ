#include <iostream>
using namespace std;

#define N 100 + 1 //交差点の数

int main(void) {
	int road[N] = {}; //各交差点の次数
	int a, b;
	
	//1,2がつながっていると仮定するとオイラーグラフ
	road[1] = road[2] = 1;
	
	while(cin >> a >> b) {
		if(a == 0 && b == 0) {
			bool flag = true;
			for(int i = 0; i < N; ++i) {
				if(!flag) continue;
				if(road[i] % 2 == 1) flag = false;
			}
			if(flag) cout << "OK" << endl;
			else cout << "NG" << endl;
			
			//リセット
			for(int i = 0; i < N; ++i) {
				road[i] = 0;
			}
			road[1] = road[2] = 1;
		} else {
			++road[a];
			++road[b];
		}
	}
	
	return 0;
}