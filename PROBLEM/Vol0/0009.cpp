// n�܂ł̎��R���̒��ɂ����f�����܂܂�Ă��邩��\������B

#include <iostream>
using namespace std;

int main(void) {
    int* array;
    int n, count;
    
    while(cin >> n) {
        array = new int[n + 1];
        count = 0;

        for(int i = 0; i <= n; ++i) {
            array[i] = 0;
        }
        for(int i = 2; i <= n; ++i) {
// i�͑f���Ȃ̂ŁAi���������ׂĂ�i�̔{���Ɉ�(=1)������B
            if(array[i] == 0) {
                for(int j = 2 * i; j <= n; j += i) {
                    array[j] = 1;
                }
                count++;
            }
        }
/* �f�����Y�����̗v�f�͂��ׂ�0�Ȃ̂ł܂Ƃ߂ĕ\�����邱�Ƃ���
        for(int i = 2; i <= n; ++i) {
            if(array[i] == 0) {
                cout << i << endl;
            }
        }
*/
        cout << count << endl;
        delete[] array;
    }
}