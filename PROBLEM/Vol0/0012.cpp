/* 
3点A(x1, y1),B(x2, y2),C(x3, y3)で囲まれた3角形の内部に
P(xp, yp)が含まれるかどうかを判定
*/

#include <iostream>
using namespace std;

int main(void) {
    double x1, x2, x3, y1, y2, y3;
    double xp, yp;
    double ABAP, BCBP, CACP;
// ABとAP,BCとBP,CAとCPの傾きの大小関係を条件式に用いる。
// 不等式の両辺に負の数を掛けると大小関係が入れ替わることに注意。
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        ABAP = (y2 - y1)*(xp - x1) - (x2 - x1)*(yp - y1);
        BCBP = (y3 - y2)*(xp - x2) - (x3 - x2)*(yp - y2);
        CACP = (y1 - y3)*(xp - x3) - (x1 - x3)*(yp - y3);
        if((ABAP > 0 && BCBP > 0 && CACP > 0) ||(ABAP < 0 && BCBP < 0 && CACP < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}