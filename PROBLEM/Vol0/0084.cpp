#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

#define N 500

int main(void){
	string str;
	string word[N];
	int n = 0;
	
	getline(cin, str);
	for(int i = 0; i < str.length(); ++i) {
		if(str[i] == ',' || str[i] == '.') str[i] = ' ';
	}
	
	istringstream iss(str);
	string s;
	
	while(iss >> s) {
		int len = s.length();
		if(3 <= len && len <= 6) {
			word[n] = s;
			++n;
		}
	}
	for(int i = 0; i < n; ++i) {
		cout << word[i];
		if(i + 1 < n) cout << ' ';
	}
	cout << endl;
	
	return 0;
}