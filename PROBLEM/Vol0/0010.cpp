// 入力された3点を通る円の中心座標と半径を求める。

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(void) {
    double x1, y1, x2, y2, x3, y3;
    double ox, oy, r;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        ox = ((y2 - y3)*(x1*x1 - x2*x2 + y1*y1 - y2*y2) - (y1 - y2)*(x2*x2 - x3*x3 + y2*y2 - y3*y3))
             / (2*((x1 - x2)*(y2 - y3) - (x2 - x3)*(y1 - y2)));
        if(y1 != y2) {
            oy = ((x1*x1 - x2*x2 + y1*y1 - y2*y2) - 2*(x1 - x2)*ox) / (2 * (y1 - y2));
        }else {
            oy = ((x2*x2 - x3*x3 + y2*y2 - y3*y3) - 2*(x2 - x3)*ox) / (2 * (y2 - y3));
        }
        
        r = sqrt((ox - x1)*(ox - x1) + (oy - y1)*(oy - y1));
        
        printf("%.3lf %.3lf %.3lf", ox, oy, r);
        cout << endl;
    }
}