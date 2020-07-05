// ç≈ïpílÇï\é¶

#include <iostream>
using namespace std;

int main(void) {
    int mode[100 + 1] = {};
    int a;
    int max;
    
    while(cin >> a) {
        ++mode[a];
    }
    
    max = 0;
    for(int i = 1; i <= 100; ++i) {
        if(mode[i] > max) {
            max = mode[i];
        }
    }
    
    for(int i = 1; i <= 100; ++i) {
        if(mode[i] ==max) {
            cout << i << endl;
        }
    }
}