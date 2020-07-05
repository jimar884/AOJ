#include <iostream>
#include <cmath>
using namespace std;

struct point {
    double x;
    double y;
};

int main(void) {
    struct point A, B, C, D;
    
    while(cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y) {
        if(A.x - B.x == 0 || C.x - D.x == 0) {
            if((A.x - B.x == C.y - D.y) || (A.y - B.y == C.x - D.x)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            double slopeAB = (A.y - B.y) / (A.x - B.x);
            double slopeCD = (C.y - D.y) / (C.x - D.x);
            if(fabs(slopeAB * slopeCD + 1) < 0.0000001) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}