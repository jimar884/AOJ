#include <iostream>
#include <string>
using namespace std;

bool solve(const int a[], int i) {
    int b[10] = {};
    for(int j = 1; j <= 9; ++j) {
        b[j] = a[j];
    }
    ++b[i];
    if(b[i] == 5) {
        return false;
    }
    for(int k = 1; k <= 9; ++k) {
        int c[10] = {};
        for(int l = 1; l <= 9; ++l) {
            c[l] = b[l];
        }
        if(c[k] < 2)  continue;
        else   c[k] -= 2;
        for(int j = 1; j <= 9; ++j) {
            switch(c[j]) {
                case 0  :   break; 
                case 1  :   if(j + 2 <= 9) {--c[j];   --c[j + 1];   --c[j + 2];}   break;
                case 2  :   if(j + 2 <= 9) {c[j] -= 2;   c[j + 1] -= 2;   c[j + 2] -= 2;}   break;
                case 3  :   c[j] -= 3;   break;
                case 4  :   c[j] -= 3;   if(c[j] == 1){--c[j];   --c[j + 1];   --c[j + 2];}   break;
                default :   break;
            }
        }
        bool flag = true;
        for(int j = 1; j <= 9; ++j) {
            if(c[j] != 0) {
                flag = false;
            }
        }
        if(flag)   return true;
    }
    return false;
}

int main(void) {
    string str;
    while(cin >> str) {
        int a[10] = {};
        int answer[9];
        char n;
        int end = 0;
        
        for(int i = 0; i < str.length(); ++i) {
            n = str[i];
            ++a[n - '0'];
        }
        for(int i = 1; i <= 9; ++i) {
            if(solve(a, i)) {
                answer[end] = i;
                ++end;
            }
        }
        if(end == 0) {
            cout << 0 << endl;
        } else {
            cout << answer[0];
            for(int i = 1; i < end; ++i) {
                cout << ' ' << answer[i];
            }
            cout << endl;
        }
        str = "";
    }
    return 0;
}