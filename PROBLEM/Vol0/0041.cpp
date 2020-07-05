#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string s;

int check = 1;

bool calc(int a, int b) {
	if(a + b == 10) {
		s += '+';
		return true;
	}
	if(a - b == 10) {
		s += '-';
		return true;
	}
	if(a * b == 10) {
		s += '*';
		return true;
	}
	return false;
}

bool calc(int a, int b, int c) {
	if(calc(a + b, c)) {
		s += '+';
		check *= 2;
		return true;
	}
	if(calc(a - b, c)) {
		s += '-';
		check *= 2;
		return true;
	}
	if(calc(a * b, c)) {
		s += '*';
		check *= 2;
		return true;
	}
	if(calc(a, b + c)) {
		s += '+';
		check *= 3;
		return true;
	}
	if(calc(a, b - c)) {
		s += '-';
		check *= 3;
		return true;
	}
	if(calc(a, b * c)) {
		s += '*';
		check *= 3;
		return true;
	}
	return false;
}

bool calc(int a, int b, int c, int d) {
	if(calc(a + b, c, d)) {
		s += '+';
		check *= 5;
		return true;
	}
	if(calc(a - b, c, d)) {
		s += '-';
		check *= 5;
		return true;
	}
	if(calc(a * b, c, d)) {
		s += '*';
		check *= 5;
		return true;
	}
	if(calc(a, b + c, d)) {
		s += '+';
		check *= 7;
		return true;
	}
	if(calc(a, b - c, d)) {
		s += '-';
		check *= 7;
		return true;
	}
	if(calc(a, b * c, d)) {
		s += '*';
		check *= 7;
		return true;
	}
	if(calc(a, b, c + d)) {
		s += '+';
		check *= 11;
		return true;
	}
	if(calc(a, b, c - d)) {
		s += '-';
		check *= 11;
		return true;
	}
	if(calc(a, b, c * d)) {
		s += '*';
		check *= 11;
		return true;
	}
	return false;
}

int main(void) {
	int a[4];
	
	while(true) {
		for(int i = 0; i < 4; ++i) {
			cin >> a[i];
		}
		if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0) {
			break;
		}
		
		int ai, aj, ak, al;
		char x, y, z;
		bool flag = false;
		check = 1;
		s = "";
		
		for(int i = 0; i < 4; ++i) {
			for(int j = 0; j < 4; ++j) {
				for(int k = 0; k < 4; ++k) {
					for(int l = 0; l < 4; ++l) {
						if(i != j && i != k && i != l && j != k && j != l && k != l) {
							if(calc(a[i], a[j], a[k], a[l])) {
								flag = true;
								ai = i;
								aj = j;
								ak = k;
								al = l;
							}
						}
						if(flag)   break;
					}
					if(flag)   break;
				}
				if(flag)   break;
			}
			if(flag)   break;
		}
		
		if(flag) {
			switch(check) {
				case 10 : {
					printf("(((%d%c%d)%c%d)%c%d)", a[ai], s[2], a[aj], s[1], a[ak], s[0], a[al]);
					cout << endl;
					break;
				}
				case 14 : {
					printf("((%d%c(%d%c%d))%c%d)", a[ai], s[1], a[aj], s[2], a[ak], s[0], a[al]);
					cout << endl;
					break;
				}
				case 15 : {
					printf("((%d%c%d)%c(%d%c%d))", a[ai], s[2], a[aj], s[0], a[ak], s[1], a[al]);
					cout << endl;
					break;
				}
				case 21 : {
					printf("(%d%c((%d%c%d)%c%d))", a[ai], s[0], a[aj], s[2], a[ak], s[1], a[al]);
					cout << endl;
					break;
				}
				case 22: {
					printf("((%d%c%d)%c(%d%c%d))", a[ai], s[1], a[aj], s[0], a[ak], s[2], a[al]);
					cout << endl;
					break;
				}
				case 33 : {
					printf("(%d%c(%d%c(%d%c%d)))", a[ai], s[0], a[aj], s[1], a[ak], s[2], a[al]);
					cout << endl;
					break;
				}
			}
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}