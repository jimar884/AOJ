#include <iostream>
#include <cstdio>
using namespace std;

#define N 15 //���@�w�̍ő�T�C�Y

int main(void) {
	int A[N][N] = {};
	int n;
	
	while(cin >> n) {
		if(n == 0) break;
		
		//������
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				A[i][j] = 0;
			}
		}
		
		int i = n / 2 + 1; //1�𖄂߂�s
		int j = n / 2; //1�𖄂߂��
		int t = 1; //�������l
		while(true) {
			A[i][j] = t;
			++t;
			if(t > n*n) break;
			++i;
			++j;
			if(i == n) i = 0;
			if(j == n) j = 0;
			if(A[i][j] != 0) {
				++i;
				--j;
				if(i == n) i = 0;
				if(j < 0) j = n - 1;
			}
		}
		
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				printf("%4d", A[i][j]);
			}
			cout << endl;
		}
	}
	
	return 0;
}