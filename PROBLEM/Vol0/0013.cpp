/*
�ԗ��̏o����B
���͂��ꂽ�ԍ��̎ԗ����i�[����Ă����A0�����͂��ꂽ�Ƃ��́A
�Ō�Ɋi�[�����i1�Ԏ�O�ɂ���j�ԗ��̔ԍ���\�����A�o��������B
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