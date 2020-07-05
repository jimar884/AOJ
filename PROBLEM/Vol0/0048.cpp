#include <iostream>
using namespace std;

void check(double w) {
    if(w <= 48) {
        cout << "light fly" << endl;
    } else if(48 < w && w <= 51) {
        cout << "fly" << endl;
    } else if(51 < w && w <= 54) {
        cout << "bantam" << endl;
    } else if(54 < w && w <= 57) {
        cout << "feather" << endl;
    } else if(57 < w && w <= 60) {
        cout << "light" << endl;
    } else if(60 < w && w <= 64) {
        cout << "light welter" << endl;
    } else if(64 < w && w <= 69) {
        cout << "welter" << endl;
    } else if(69 < w && w <= 75) {
        cout << "light middle" << endl;
    } else if(75 < w && w <= 81) {
        cout << "middle" << endl;
    } else if(81 < w && w <= 91) {
        cout << "light heavy" << endl;
    } else {
        cout << "heavy" << endl;
    }
}

int main(void) {
    double w;
    
    while(cin >> w) {
        check(w);
    }
    
    return 0;
}