/*           ax + by = c
   2次方程式 dx + ey = f の解を求める。
   xをyと同じように求める場合は
   if(x == 0) { x = 0;}
   if(y == 0) { y = 0;}
   の式が必要になるが理由不明
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    double a, b, c, d, e, f;
    double x, y;
    
    while(cin >> a >> b >> c >> d >> e >> f) {
        y = (c*d - a*f) / (b*d - a*e);
        x = (c - b * y) / a;
        
        printf("%.3lf %.3lf", x, y);
        cout << endl;
    }
}