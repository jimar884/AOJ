// 天秤

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int weight;
  
  while(cin >> weight) {
    vector<int> answer;
    for(int i = 10; i >= 0; --i) {
      if((1 << i) <= weight) {
        weight -= (1 << i);   // ビット演算を使用
        answer.push_back(1 << i);
      }
    }
    
    cout << answer[answer.size() - 1];
    for(int i = answer.size() - 2; i >= 0; --i) {
      cout << " " << answer[i];
    }
    cout << endl;
  }
}