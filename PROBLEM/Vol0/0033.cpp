#include <iostream>
using namespace std;

int a[10];
bool check;

void dfs(int b, int c, int index) {
  if(index == 10) {
    check = true;
  }
  if(b < a[index]) {
    dfs(a[index], c, index + 1);
  }
  if(c < a[index]) {
    dfs(b, a[index], index + 1);
  }
}

int main(void) {
  int n;
  
  cin >> n;
  
  for(int i = 0; i < n; ++i) {
    check = false;
    for(int i = 0; i < 10; ++i) {
      cin >> a[i];
    }
    dfs(0, 0, 0);
    if(check) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}