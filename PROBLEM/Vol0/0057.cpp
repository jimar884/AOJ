#include <iostream>
using namespace std;

int main(void) {
    int n;
    
    while(cin >> n) {
        int area = (n * n + n + 2) / 2;
        
        cout << area << endl;
    }
    
    return 0;
}