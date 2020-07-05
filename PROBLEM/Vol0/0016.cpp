// a進んでb度右に回るを繰り返す。a = b = 0 が入力されたら現在の座標を表示

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double pi = 3.14159;

int main(void) {
    int a, b;
    double rad = 0.0;
    double x = 0;
    double y = 0;
    
    do {
        scanf("%d,%d", &a, &b);
        x += a * sin((rad/180) * pi);
        y += a * cos((rad/180) * pi);
        rad += b;
    }while(!(a == 0 && b == 0));
    cout << (int)x << endl
         << (int)y << endl;
}