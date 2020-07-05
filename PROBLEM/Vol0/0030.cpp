// 0`9‚ÌˆÙ‚È‚é”šnŒÂ‚Ì˜a‚ªs‚É‚È‚é‘g‚İ‡‚í‚¹‚ª‚¢‚­‚Â‚ ‚é‚©‹‚ß‚éB
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