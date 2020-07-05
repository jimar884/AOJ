#include <iostream>
using namespace std;

void solve(int y, int m, int d) {
	if(y < 1868) {
		cout << "pre-meiji" << endl;
	} else if((y == 1868) && ((m < 9) || (m == 9 && d < 8))) {
		cout << "pre-meiji" << endl;
	} else if(y < 1912) {
		cout << "meiji" << ' ' << y - 1868 + 1 << ' ' << m << ' ' << d << endl;
	} else if((y == 1912) && ((m < 7) || (m == 7 && d < 30))) {
		cout << "meiji" << ' ' << y - 1868 + 1 << ' ' << m << ' ' << d << endl;
	} else if(y < 1926) {
		cout << "taisho" << ' ' << y - 1912 + 1 << ' ' << m <<  ' ' << d << endl;
	} else if((y == 1926) && ((m < 12) || (m == 12 && d < 25))){
		cout << "taisho" << ' ' << y - 1912 + 1 << ' ' << m <<  ' ' << d << endl;
	} else if(y < 1989) {
		cout << "showa" << ' ' << y - 1926 + 1 << ' ' << m <<  ' ' << d << endl;
	} else if((y == 1989) && (m == 1 && d < 8)) {
		cout << "showa" << ' ' << y - 1926 + 1 << ' ' << m <<  ' ' << d << endl;
	} else {
		cout << "heisei" << ' ' << y - 1989 + 1 << ' ' << m <<  ' ' << d << endl;
	}
}

int main(void) {
	int y, m, d;
	
	while(cin >> y >> m >> d) {
		solve(y, m ,d);
	}
	
	return 0;
}