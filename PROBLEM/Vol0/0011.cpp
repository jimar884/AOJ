// ���݂������B

#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int w, n;
    int* vertical;
    int a, b, tmp;
    
    cin >> w;
    vertical = new int[w + 1];
    for(int i = 0; i <= w; ++i) {
        vertical[i] = i;
    }
    cin >> n;
// scanf��""����','�����邱�Ƃœ��͂̎d����a,b�ɂ��邱�Ƃ��o����Bab�̓G���[
    for(int i = 0; i < n; ++i) {
        scanf("%d,%d", &a, &b);
        tmp         = vertical[a];
        vertical[a] = vertical[b];
        vertical[b] = tmp;
    }
    for(int i = 1; i <= w; ++i) {
        cout << vertical[i] << endl;
    }
}