// •¶Žš—ñ‚ðŒã‚ë‚©‚ç•\Ž¦

#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char str[20];
    int size;
    
    cin >> str;
    size = strlen(str);
    for(int i = 1; i <= size; ++i) {
        cout << str[size - i];
    }
    cout << endl;
}