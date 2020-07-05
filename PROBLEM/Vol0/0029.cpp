#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;

int main(void) {
  string str;   // ���͂���錴��
  getline(cin, str);
  stringstream sstr(str);  // sstr��str�ŏ�����
  vector<string> word;   // �o�Ă����P����d�����Ȃ��悤�ɕێ����邽�߂�vecor
  vector<int> count;   // �o�Ă����P��̉񐔂�ێ����邽�߂�vector
  bool check;   // �o�Ă����P�ꂪ���o���ǂ����𔻒f���邽�߂�bool
  
  while(sstr >> str) {   // sstr����str�ɒP�ꂲ�Ƃɑ�������Bstr�͖��񃊃Z�b�g�����B
    check = false;
    for(int i = 0; i < word.size(); ++i) {
      if(str == word[i]) {
        ++count[i];
        check = true;
      }
    }
    if(! check) {
      word.push_back(str);
      count.push_back(1);
    }
  }
  
  int often = 0;
  for(int i = 0; i < count.size(); ++i) {
    if(count[often] < count[i]) {
      often = i;
    }
  }
  cout << word[often] << " ";
  
  string longest = "";
  for(int i = 0; i < word.size(); ++i) {
    if(longest.size() < word[i].size()) {
      longest = word[i];
    }
  }
  cout << longest << endl;
}