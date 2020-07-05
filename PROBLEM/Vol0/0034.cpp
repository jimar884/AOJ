#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
  int l[10];
  int v1, v2;
  double length;
  double distance;
  
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2) != EOF) {
    length = 0;
    for(int i = 0; i < 10; ++i) {
      length += l[i];
    }
    
    distance = v1 * length / (v1 + v2);
    if(distance == 0) {
      cout << 1 << endl;
    } else {
      length = 0;
      for(int i = 0; i < 10; ++i) {
        length += l[i];
        if(length >= distance) {
          cout << i + 1 << endl;
          break;
        }
      }
    }
  }
  return 0;
}