#include <iostream>
#include <string>
using namespace std;

void check(char A[12][12], int i, int j) {
	if(A[i][j] == '1') {
		A[i][j] = '0';
		if(i > 0)    check(A, i - 1, j);
		if(i < 11)   check(A, i + 1, j);
		if(j > 0)    check(A, i, j - 1);
		if(j < 11)   check(A, i, j + 1);
	}
}

int main(void) {
	char A[12][12];
	int island;
	
	while(cin >> A[0]) {
		island = 0;
		for(int i = 1; i < 12; ++i) {
			cin >> A[i];
		}
		
		for(int i = 0; i < 12; ++i) {
			for(int j = 0; j < 12; ++j) {
				if(A[i][j] == '1') {
					check(A, i, j);
					++island;
				}
			}
		}
		
		cout << island << endl;
	}
	
	return 0;
}