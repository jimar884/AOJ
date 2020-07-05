#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(void) {
    int n;
    char b[2];
    int blood[4] = {};
    
    while(scanf("%d,%s", &n, b) != EOF) {
        if(b[0] == 'A' && strlen(b) == 1) {
            ++blood[0];
        } else if(b[0] == 'B') {
            ++blood[1];
        } else if(b[0] == 'A' && b[1] == 'B') {
            ++blood[2];
        } else if(b[0] == 'O') {
            ++blood[3];
        }
    }
    
    for(int i = 0; i < 4; ++i) {
        cout << blood[i] << endl;
    }
    
    return 0;
}