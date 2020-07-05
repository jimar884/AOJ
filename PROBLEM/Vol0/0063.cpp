#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str1, str2;
	int len;
	int ans = 0;
	
	while(cin >> str1) {
		str2 = "";
		len = str1.length();
		char rev[100];
		bool flag = true;
		char a, b;
		
		for(int i = 0; i < len; ++i) {
			rev[i] = str1[len - i - 1];
		}
		
		for(int i = 0; i < len; ++i) {
			str2 += rev[i];
		}
		
		if(str1 == str2)   ++ans;
	}
	
	cout << ans << endl;
	
	return 0;
}