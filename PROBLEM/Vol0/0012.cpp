/* 
3�_A(x1, y1),B(x2, y2),C(x3, y3)�ň͂܂ꂽ3�p�`�̓�����
P(xp, yp)���܂܂�邩�ǂ����𔻒�
*/

#include <iostream>
using namespace std;

int main(void) {
    double x1, x2, x3, y1, y2, y3;
    double xp, yp;
    double ABAP, BCBP, CACP;
// AB��AP,BC��BP,CA��CP�̌X���̑召�֌W���������ɗp����B
// �s�����̗��ӂɕ��̐����|����Ƒ召�֌W������ւ�邱�Ƃɒ��ӁB
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        ABAP = (y2 - y1)*(xp - x1) - (x2 - x1)*(yp - y1);
        BCBP = (y3 - y2)*(xp - x2) - (x3 - x2)*(yp - y2);
        CACP = (y1 - y3)*(xp - x3) - (x1 - x3)*(yp - y3);
        if((ABAP > 0 && BCBP > 0 && CACP > 0) ||(ABAP < 0 && BCBP < 0 && CACP < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}