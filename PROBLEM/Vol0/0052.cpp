#include <iostream>
using namespace std;

int main(void) {
    int n;
    int array_2[20001] = {};
    int array_5[20001] = {};
    
    for(int i = 1; i <= 20000; ++i) {
        int j = i;
        array_2[i] = array_2[i - 1];
        array_5[i] = array_5[i - 1];
        while(j % 2 == 0) {
            ++array_2[i];
            j /= 2;
        }
        while(j % 5 == 0) {
            ++array_5[i];
            j /= 5;
        }
    }
    
    while(cin >> n) {
        if(n == 0)   break;
        int ans = (array_2[n] < array_5[n]) ? array_2[n] : array_5[n];
        cout << ans << endl;
    }
    
    return 0;
}