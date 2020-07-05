#include <iostream>
using namespace std;

//a‚Æb‚ÌÅ‘åŒö–ñ”‚ÆÅ¬Œö”{”‚ð‹‚ß‚éB
void Euclidean(const long a, const long b, long& divisor, long& multiple);

int main(void) {
    long a, b;
    long divisor, multiple;
    
    while(cin >> a >> b) {
        Euclidean(a, b, divisor, multiple);
        cout << divisor << ' ' << multiple << endl;
    }
}

void Euclidean(const long a, const long b, long& divisor, long& multiple) {
    long L, S, n;
    if(a > b) { L = a;   S = b; }
    else      { L = b;   S = a; }
    while((L % S) != 0) {
        n = L;
        L = S;
        S = n % S;
    }
    divisor = S;
    multiple = a * b / divisor;
}