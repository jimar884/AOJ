/*
二つの円A,Bの位置関係を調べる。
BがAの中にあるとき'2', AがBの中にあるとき'-2',
AとBが共有点を持つとき'1', 持たないとき'0'
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    double xa, ya, ra, xb, yb, rb;
    double distance;
    int answer;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &ra, &xb, &yb, &rb);
        distance = (xa - xb)*(xa - xb) + (ya - yb)*(ya - yb);
        
        if(distance > (ra + rb)*(ra + rb)) {
            answer = 0;
        } else if((ra - rb)*(ra - rb) <= distance && distance <= (ra + rb)*(ra + rb)) {
            answer = 1;
        } else if(ra > rb) {
            answer = 2;
        } else if(ra < rb) {
            answer = -2;
        }
        cout << answer << endl;
    }
}
