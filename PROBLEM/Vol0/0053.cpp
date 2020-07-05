#include <iostream>
using namespace std;

#define SIZE 200000

int main(void) {
    long long prime[SIZE + 1] = {};
    long long p[10001] = {};
    int n;
    
    for(long long i = 2; i <= SIZE; ++i) {
        if(prime[i] != 0)   continue;
        long long j = i * 2;
        while(j <= SIZE) {
            ++prime[j];
            j += i;
        }
        
    }
    int j = 2;
    for(int i = 1; i <= 10000; ++i) {
        while(prime[j] != 0) {
            ++j;
        }
        p[i] = p[i - 1] + j;
        ++j;
    }
    
    while(cin >> n) {
        if(n == 0)   break;
        cout << p[n] << endl;
    }
    
    return 0;
}