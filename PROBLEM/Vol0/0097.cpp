#include <iostream>
using namespace std;

int main(void) {
	int n, s;
	int table[10][101][1001];
	
	for(int i = 0; i <= 100; ++i) table[1][i][i] = 1;
	
	for(int i = 2; i <= 9; ++i) {
		for(int j = 0; j <=1001; ++j) {
			
	
	while(cin >> n >> s) {
		if(n == 0 && s == 0) break;
		cout << table[n][s] << endl;
	}
	
	return 0;
}