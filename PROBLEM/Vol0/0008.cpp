// a + b + c + d = n ‚Æ‚È‚é(a, b, c, d)‚Ì‘g‚İ‡‚í‚¹‚ª‚¢‚­‚Â‚ ‚é‚©’²‚×‚éB

#include <iostream>
using namespace std;

int Range = 10;

int main(void) {
    int n, count;
    
    while(cin >> n) {
        count = 0;
        for(int a = 0; a < Range; a++) {
            for(int b = 0; b < Range; b++) {
                for(int c = 0; c < Range; c++) {
                    for(int d = 0; d < Range; d++) {
                        if((a + b + c + d) == n) {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
}