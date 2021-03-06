// 隣り合う2辺(a, b)と対角線(c)から長方形とひし形を数える。
#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
  int a, b, c;
  int rectangle = 0;
  int rhombus = 0;
  
  while(scanf("%d,%d,%d", &a, &b, &c) != EOF) {
    if(c*c == a*a + b*b) {
      ++rectangle;
    } else if(a == b) {
      ++rhombus;
    }
  }
  cout << rectangle << endl
       << rhombus << endl;
}