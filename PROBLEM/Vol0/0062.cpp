#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str, cpy;
	
	while(cin >> str) {
		int a, b;
		
		while (str.length() != 1) {
			cpy = "";
			for(int i = 0; i < str.length() - 1; ++i) {
				a = str[i] - '0';
				b = str[i + 1] - '0';
				cpy += ((a + b) % 10) + '0';
			}
			str = cpy;
		}
		
		cout << str << endl;
	}
	
	return 0;
}