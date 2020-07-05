#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    double a;
    
    while(cin >> a) {
        double s = 0;
        double A[10 + 1] = {};
        
        A[1] = a;
        
        for(int i = 2; i <= 10; ++i) {
            if(i % 2 == 0)   A[i] = A[i - 1] * 2;
            else   A[i] = A[i - 1] / 3;
        }
        
        for(int i = 1; i <= 10; ++i) {
            s += A[i];
        }
        
        printf("%.8lf\n", s);
    }
    
    return 0;
}