#include <iostream>
using namespace std;

struct point {
	double x;
	double y;
};

int main(void) {
	struct point a1, a2, b1, b2;
	
	while(cin >> a1.x >> a1.y >> a2.x >> a2.y >> b1.x >> b1.y >> b2.x >> b2.y) {
		bool flag  = false;
		
		if(b2.x >= a1.x && b1.x <= a2.x) {
			if(b2.y >= a1.y && b1.y <= a2.y) {
				flag = true;
			}
		}
		
		if(flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}