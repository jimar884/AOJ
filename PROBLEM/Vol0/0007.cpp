// 一週間で5パーセントの利子がついた場合の借金の合計。1000円未満切り上げ

#include <iostream>
using namespace std;

int main(void) {
    int sum = 100000;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        sum *= 1.05;
        if((sum % 1000) != 0) {
            sum = (sum / 1000 + 1) * 1000;
        }
    }
    cout << sum << endl;
}