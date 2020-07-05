// ’·‚³n‚Ì”z—ñ‚ÌÅ‘å•”•ª”z—ñ‚ğ‹‚ß‚éB

#include <iostream>
using namespace std;

int main(void) {
    int sum, sum_max;
    int n;
    
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        int array[n] = {};
        for(int i = 0; i < n; ++i) {
            cin >> array[i];
        }
        sum_max = array[0];
        for(int i = 0; i < n; ++i) {
            sum = 0;
            for(int j = i; j < n; ++j) {
                sum += array[j];
                if(sum_max < sum) {
                    sum_max = sum;
                }
            }
        }
        cout << sum_max << endl;
    }
}