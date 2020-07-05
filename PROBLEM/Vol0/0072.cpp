#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

#define N 100 //�j�Ղ̐�

int main(void) {
	int n, m;
	int a, b, d;
	int road[N][N]; //�Y��������Y�����ւ̋�����1/100�ɏk����������
	bool ruin[N]; //�ʂ����j�Ղ�true
	int count; //�ʂ����j�Ղ̐�
	int ans; //���U�̐�
	int min_a, min_b;
	
	while(true) {
		cin >> n;
		if(n == 0) break;
		
		//������
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
		
		ruin[0] = true; //�n�_��0
		++count; //�n�_���J�E���g
		while(count != n) {
			min_a = min_b = 0; //road[0][0]��INT_MAX������ԕ��Ƃ��ė��p
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