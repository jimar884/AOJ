#include <iostream>
using namespace std;

#define SIZE 50000

int main(void) {
    int prime[SIZE + 1] = {};
    int p[SIZE] = {};
    int len = 0;
    int n;
    
    for(int i = 2; i <= SIZE; ++i) {
        if(prime[i] != 0)   continue;
        
        int j = i * 2;
        while(j <= SIZE) {
            ++prime[j];
            j += i;
        }
        
        p[len] = i;
        ++len;
    }
    
    while(cin >> n) {
        if(n == 0)   break;
        
        int ans = 0;
        
        int i = 0;
        while(p[i] <= n / 2) {
            if(prime[n - p[i]] == 0) {
                ++ans;
            }
            ++i;
        }
        
        cout << ans << endl;
    }
    return 0;
}