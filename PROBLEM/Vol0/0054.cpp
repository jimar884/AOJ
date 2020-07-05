#include <iostream>
using namespace std;

int main(void) {
    int a, b, n, s;
    
    while(cin >> a >> b >> n) {
        s = 0;
        a = a % b;
        
        int i = 0;
        while(i < n) {
            if(a == 0)   break;
            s += (a * 10) / b;
            a = (a * 10) % b;
            ++i;
        }

        cout << s << endl;
    }
    
    return 0;
}