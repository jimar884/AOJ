#include <iostream>
using namespace std;

int n, m, star, d;
char step[30][9];

bool search(void) {
	int now = m;
	for(int i = 0; i < d; ++i) {
		if(now == 1) {
			if(step[i][now - 1] == '1')   ++now;
		} else if(now == n) {
			if(step[i][now - 2] == '1')   --now;
		} else {
			if(step[i][now - 1] == '1')   ++now;
			else if(step[i][now - 2] == '1')   --now;
		}
	}
	if(now == star)   return true;
	else              return false;
}

int main(void) {
	while(cin >> n) {
		if(n == 0)   break;
		cin >> m >> star >> d;
		for(int i = 0; i < d; ++i) {
			cin >> step[i];
		}

		if(search()) {
			cout << 0 << endl;
		} else {
			bool flag = false;
			int i = 0;
			int j = 0;
			while(i < d) {
				if(flag)   break;
				j = 0;
				while(j < n - 1) {
					if(j == 0 && step[i][j] == '0' && step[i][j + 1] == '0') {
						step[i][j] = '1';
						if(search()) {
							cout << i + 1 << ' ' << j + 1 << endl;
							flag = true;
							break;
						}
						step[i][j] = '0';
					} else if(j == n - 2 && step[i][j] == '0' && step[i][j - 1] == '0') {
						step[i][j] = '1';
						if(search()) {
							cout << i + 1 << ' ' << j + 1 << endl;
							flag = true;
							break;
						}
						step[i][j] = '0';
					} else if(step[i][j - 1] == '0' && step[i][j] == '0' && step[i][j + 1] == '0') {
						step[i][j] = '1';
						if(search()) {
							cout << i + 1 << ' ' << j + 1 << endl;
							flag = true;
							break;
						}
						step[i][j] = '0';
					}
					++j;
				}
				++i;
			}
			if(flag == false) {
				cout << 1 << endl;
			}
		}
	}
	return 0;
}