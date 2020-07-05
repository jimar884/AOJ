#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void) {
    int n[5];
    string str;
    
    scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);
    
    sort(n, n + 5);
    
    cout << n[4] << ' ' << n[3] << ' ' << n[2]
         << ' '  << n[1] << ' ' << n[0] << endl;
}