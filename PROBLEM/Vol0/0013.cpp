/*
車両の出入り。
入力された番号の車両が格納されていき、0が入力されたときは、
最後に格納した（1番手前にある）車両の番号を表示し、出発させる。
*/

#include <iostream>
using namespace std;

int main(void) {
    int garage[100] = {};
    int size;
    int i = 0;
    int number;
    
    while(cin >> number) {
        if(number == 0) {
            i--;
            if(i < 0) {
                break;
            }
            cout << garage[i] << endl;
        } else {
            garage[i] = number;
            i++;
        }
    }
}