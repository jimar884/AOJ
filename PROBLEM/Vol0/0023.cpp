/*
��̉~A,B�̈ʒu�֌W�𒲂ׂ�B
B��A�̒��ɂ���Ƃ�'2', A��B�̒��ɂ���Ƃ�'-2',
A��B�����L�_�����Ƃ�'1', �����Ȃ��Ƃ�'0'
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
