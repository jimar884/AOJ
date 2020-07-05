#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    string str;
    
    getline(cin, str);
    
    for(int i = 0, size = str.size(); i < size; ++i) {
        if('a' <= str[i] && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    
    cout << str << endl;
}