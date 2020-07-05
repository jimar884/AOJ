#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    int A[8];
    int ans[8];
    long long max, min;
    long long x;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        max = 0;
        min = 0;
        x = 1;
        
        cin >> str;
        for(int j = 0; j < str.length(); ++j) {
            A[j] = str[j] - '0';
        }
        
        for(int k = 0; k < 7; ++k) {
            for(int l = k + 1; l < 8; ++l) {
                if(A[l] < A[k]) {
                    int copy = A[k];
                    A[k] = A[l];
                    A[l] = copy;
                }
            }
        }
        
        for(int j = 0; j < 8; ++j) {
            max += A[j] * x;
            min += A[7 - j] * x;
            x *= 10;
        }
        
        cout << max - min << endl;
    }
    
    return 0;
}