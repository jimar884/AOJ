/*           ax + by = c
   2�������� dx + ey = f �̉������߂�B
   x��y�Ɠ����悤�ɋ��߂�ꍇ��
   if(x == 0) { x = 0;}
   if(y == 0) { y = 0;}
   �̎����K�v�ɂȂ邪���R�s��
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