#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;

int main(void) {
  string str;   // 入力される原文
  getline(cin, str);
  stringstream sstr(str);  // sstrをstrで初期化
  vector<string> word;   // 出てきた単語を重複しないように保持するためのvecor
  vector<int> count;   // 出てきた単語の回数を保持するためのvector
  bool check;   // 出てきた単語が既出かどうかを判断するためのbool
  
  while(sstr >> str) {   // sstrからstrに単語ごとに代入される。strは毎回リセットされる。
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