#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
  string str1, str2;
  bool check;
  int n;
  cin >> n;
  getline(cin, str1);
  
  while(n--) {
    check = false;
    getline(cin, str1);
    
    for(int i = 1; i < 26; ++i) {
      if(check) {
        break;
      }
      if(i % 2 == 0 || i % 13 == 0) {
        continue;
      }
      for(int j = 0; j < 26; ++j) {
        str2 = str1;
        for(int k = 0; k < str1.size(); ++k) {
          if(str1[k] == ' ') {
            continue;
          }
          str2[k] = (((str1[k] - 'a') * i + j) % 26) + 'a';
        }
        if(str2.find("that") != -1 || str2.find("this") != -1) {
          check = true;
          cout << str2 << endl;
          break;
        }
      }
    }
  }
}