/* 
3“_A(x1, y1),B(x2, y2),C(x3, y3)‚ÅˆÍ‚Ü‚ê‚½3ŠpŒ`‚Ì“à•”‚É
P(xp, yp)‚ªŠÜ‚Ü‚ê‚é‚©‚Ç‚¤‚©‚ð”»’è
*/

#include <iostream>
using namespace std;

int main(void) {
    double x1, x2, x3, y1, y2, y3;
    double xp, yp;
    double ABAP, BCBP, CACP;
// AB‚ÆAP,BC‚ÆBP,CA‚ÆCP‚ÌŒX‚«‚Ì‘å¬ŠÖŒW‚ððŒŽ®‚É—p‚¢‚éB
// •s“™Ž®‚Ì—¼•Ó‚É•‰‚Ì”‚ðŠ|‚¯‚é‚Æ‘å¬ŠÖŒW‚ª“ü‚ê‘Ö‚í‚é‚±‚Æ‚É’ˆÓB
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