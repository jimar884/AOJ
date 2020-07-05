#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int start, end, x;
	int sum = 0;
	
	while(cin >> str) {
		int i = 0;
		while(i < str.length()) {
			if('0' <= str[i] && str[i] <= '9') {
				start = i;
				while('0' <= str[i] && str[i] <= '9') {
					end = i;
					++i;
				}
				x = 1;
				for(int j = end; j >= start; --j) {
					sum += (str[j] - '0') * x;
					x *= 10;
				}
			}
			++i;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}