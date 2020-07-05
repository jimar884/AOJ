/*
y = x*xの0 <= x <= 600の積分
ただし横幅dが600の約数の長方形の和で考えるため、精度は低い
*/

#include <iostream>
using namespace std;

int main(void) {
    int d;
    int square;
    
    while(cin >> d) {
        square = 0;
        for(int i = 0; i < 600; i += d) {
            square += (i * i) * d;
        }
        cout << square << endl;
    }
}