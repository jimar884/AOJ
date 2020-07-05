#include <iostream>
#include <string>
using namespace std;

void check(int* a) {
	if(a[0] != 0 && a[0] == a[1] && a[1] == a[2]) {
		switch(a[0]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[3] != 0 && a[3] == a[4] && a[4] == a[5]) {
		switch(a[3]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[6] != 0 && a[6] == a[7] && a[7] == a[8]) {
		switch(a[6]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[0] != 0 && a[0] == a[3] && a[3] == a[6]) {
		switch(a[0]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[1] != 0 && a[1] == a[4] && a[4] == a[7]) {
		switch(a[1]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[2] != 0 && a[2] == a[5] && a[5] == a[8]) {
		switch(a[2]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[0] != 0 && a[0] == a[4] && a[4] == a[8]) {
		switch(a[0]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else if(a[2] != 0 && a[2] == a[4] && a[4] == a[6]) {
		switch(a[2]) {
			case 1  : cout << 'o' << endl;   break;
			case -1 : cout << 'x' << endl;   break;
		}
	} else {
		cout << 'd' << endl;
	}
}

int main(void) {
	string str;
	int board[9] = {};
	
	while(cin >> str) {
		for(int i = 0; i < 9; ++i) {
			switch(str[i]) {
				case 'o' : board[i] = 1;   break;
				case 'x' : board[i] = -1;   break;
				case 's' : board[i] = 0;;   break;
			}
		}
		
		check(board);
	}
	
	return 0;
}