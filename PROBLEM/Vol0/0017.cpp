/* 
�V�[�U�[�Í����̉��
cout << str[i] + 1;
�Ƃ���ƕ������o�͂���Ȃ��̂Œ��ӁB�z������������ĕ����R�[�h�����炷�B
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    string str;
    int size;
    int f = string::npos;
    
    while(getline(cin, str)) {
        size = str.size();
        while(str.find("the") == f && str.find("this") == f && str.find("that") == f) {
            for(int i = 0; i < size; ++i) {
                if('a' <= str[i] && str[i] < 'z') {
                    str[i]++;
                } else if(str[i] == 'z') {
                    str[i] = 'a';
                }
            }
        }
        cout << str << endl;
    }
}