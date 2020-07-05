#include <iostream>
using namespace std;

#define N 3000

int main(void) {
	bool table[N]; //table[i]がtrueならうるう年
	int a, b;
	bool first; //最後の一行に開業を入れるとエラーなので注意
	bool flag; //a-b間にうるう年があったらtrue;
	
	table[0] = 1;
	for(int i = 1; i < N; ++i) {
		if(i % 4 == 0) {
			if(i % 400 == 0) {
				table[i] = true;
			} else if(i % 100 == 0) {
				table[i] = false;
			} else {
				table[i] = true;
			}
		} else {
			table[i] = false;
		}
	}
	
	
	first = true;
	while(cin >> a >> b) {
		if(a == 0 && b == 0) break;
		
		if(!first) cout << endl;
		
		flag = false;
		for(int i = a; i <= b; ++i) {
			if(table[i]) {
				cout << i << endl;
				flag = true;
			}
		}
		
		if(!flag) cout << "NA" << endl;
		
		first = false;
	}
	
	return 0;
}