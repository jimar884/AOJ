/*
y = x*x��0 <= x <= 600�̐ϕ�
����������d��600�̖񐔂̒����`�̘a�ōl���邽�߁A���x�͒Ⴂ
*/

#include <iostream>
using namespace std;

int main(void) {
    int d;
    int square;
    
    while(cin >> d) {
        square = 0;
        for(int i = 0; i < 600; i += d) {
            square += (i * i) * d;
        }
        cout << square << endl;
    }
}