#include <iostream>
using namespace std;

int main(void) {
	int C1, C2, C3;
	int sum, over20, under20;
	
	while(cin >> C1 >> C2 >> C3) {
		sum = C1 + C2;
		over20 = 0;
		under20 = 0;
		int card[10 + 1] = {};
		++card[C1];
		++card[C2];
		++card[C3];
		
		for(int i = 1; i <= 10; ++i) {
			if(card[i] == 0) {
				if(sum + i <= 20) {
					++under20;
				} else {
					++over20;
				}
			}
		}
		if(under20 >= over20) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
