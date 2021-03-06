// 0〜9の異なる数字n個の和がsになる組み合わせがいくつあるか求める。
#include <iostream>
#include <cstdio>
using namespace std;

int count;

void dfs(int n, int s, int sum) {
  if (sum > 9) {
    if(n == 0 && s == 0) {
      ++count;
    }
    return;
  }
  dfs(n -1, s - sum, sum + 1);
  dfs(n, s, sum + 1);
  return;
}

int main(void) {
  int n, s;
  while(cin >> n >> s) {
    if(n == 0 && s == 0) {
      return 0;
    }
    count = 0;
    dfs(n, s, 0);
    cout << count << endl;
  }
}