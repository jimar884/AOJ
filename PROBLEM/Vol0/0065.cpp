#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
	string data;
	int company1[1000 + 1] = {};
	int company2[1000 + 1] = {};
	int c;
	int x;
	int p;
	
	while(getline(cin, data)) {
		if(data == "")   break;
		p = data.find(',');
		c = 0;
		x = 1;
		for(int i = p - 1; i >= 0; --i) {
			c += (data[i] - '0') * x;
			x *= 10;
		}
		++company1[c];
	}
	
	while(getline(cin, data)) {
		if(data == "")   break;
		p = data.find(',');
		c = 0;
		x = 1;
		for(int i = p - 1; i >= 0; --i) {
			c += (data[i] - '0') * x;
			x *= 10;
		}
		++company2[c];
	}
	
	for(int i = 0; i <= 1000; ++i) {
		if(company1[i] > 0 && company2[i] > 0) {
			cout << i << ' ' << company1[i] + company2[i] << endl;
		}
	}
	
	return 0;
}