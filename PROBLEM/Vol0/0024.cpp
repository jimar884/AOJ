//��������邽�߂ɕK�v�Ȍ����̍��������߂�B

#include <iostream>
using namespace std;

int main(void) {
    int N;
    double t, v, d;
    
    while(cin >> v) {
        N = 0;
        t = v / 9.8;
        d = 4.9 * t * t;
        
        while(N * 5 - 5 < d) {
            ++N;
        }
        
        cout << N << endl;
    }
}