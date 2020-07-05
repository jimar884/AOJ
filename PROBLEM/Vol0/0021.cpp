/*
A(x1, y1),B(x2, y2),C(x3, y3),D(x4, y4)において直線AB、BCが平行かどうか調べる
浮動小数点を扱う場合は誤差が生じるので==を使うのは避ける。
*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double slope1, slope2;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        slope1 = (y2 - y1) * (x4 - x3);
        slope2 = (y4 - y3) * (x2 - x1);
        
        if(abs(slope1 - slope2) < 0.0000000001) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}