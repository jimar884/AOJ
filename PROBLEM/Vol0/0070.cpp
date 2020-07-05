#include <iostream>
using namespace std;

int k[10] = {};
int sum[11][331] = {};

int conbination(int n, int s) {
    int S;
    if(n == 11) return 0;
    for(int i = 0; i < 10; ++i) {
        if(k[i]) continue;
        k[i] = 1;
        S = s + n * i;
        ++sum[n][S];
        conbination(n + 1, S);
        k[i] = 0;
    }
    return 0;
}

int main(void) {
    conbination(1, 0);
    
    int n, s;
    
    while(cin >> n >> s) {
        if(s > 330) s = 0;
        cout << sum[n][s] << endl;
    }
    
    return 0;
}