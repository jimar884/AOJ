#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>
using namespace std;

#define N 500 //スタックのサイズ

int main(void){
	string str;
	
	while(getline(cin, str)) {
		double num[N] = {};
		int n = 0; //スタック内の要素数
		istringstream iss(str);
		string s;
		while(iss >> s) {
		char ch = s[0];
			switch(ch) {
				case '+' : num[n - 2] += num[n - 1];   num[n - 1] = 0;   --n;   break;
				case '*' : num[n - 2] *= num[n - 1];   num[n - 1] = 0;   --n;   break;
				case '/' : num[n - 2] /= num[n - 1];   num[n - 1] = 0;   --n;   break;
				case '-' : {
					if(s.length() == 1) {
						num[n - 2] -= num[n - 1];
						num[n - 1] = 0;
						--n;
					} else {
						int t = 1;
						for(int i = s.length() - 1; i >= 1; --i) {
							num[n] += (s[i] - '0') * t;
							t *= 10;
						}
						num[n] *= -1;
						++n;
					}
					break;
				}
				default  : {
					int t = 1;
					for(int i = s.length() - 1; i >= 0; --i) {
						num[n] += (s[i] - '0') * t;
						t *= 10;
					}
					++n;
					break;
				}
			}
		}
		printf("%.6lf\n", num[0]);
	}
}