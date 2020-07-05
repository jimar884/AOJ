// nまでの自然数の中にいくつ素数が含まれているかを表示する。

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
// iは素数なので、iを除くすべてのiの倍数に印(=1)をつける。
            if(array[i] == 0) {
                for(int j = 2 * i; j <= n; j += i) {
                    array[j] = 1;
                }
                count++;
            }
        }
/* 素数が添え字の要素はすべて0なのでまとめて表示することも可
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