#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	string str;
	
	while(cin >> str) {
		int len = str.length();
		for(int i = 0; i < len; ++i) {
			char c = str[i];
			if(c == '@') {
				int n = str[i + 1] - '0';
				char s = str[i + 2];
				i += 2;
				for(int j = 0; j < n; ++j) {
					cout << s;
				}
			} else {
				cout << c;
			}
		}
		cout << endl;
	}
	
	return 0;
}