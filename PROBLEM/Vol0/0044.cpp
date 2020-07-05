#include <iostream>
using namespace std;

#define MAX 60000

int main(void) {
    int prime[MAX] ={};
    int n;
    
    for(int i = 2; i < MAX; ++i) {
        if(prime[i] != 0)   continue;
        int j = i + i;
        while(j < MAX) {
            ++prime[j];
            j += i;
        }
    }
    
    while(cin >> n) {
        int i = n - 1;
        while(i >= 2) {
            if(prime[i] == 0) {
                cout << i;
                break;
            }
            --i;
        }
        i = n + 1;
        while(i < MAX) {
            if(prime[i] == 0) {
                cout << ' ' << i << endl;
                break;
            }
            ++i;
        }
    }
    return 0;
}