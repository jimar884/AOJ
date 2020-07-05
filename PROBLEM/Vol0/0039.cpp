#include <iostream>
#include <cstring>
using namespace std;

enum {
  I = 1,
  V = 5,
  X = 10,
  L = 50,
  C = 100,
  D = 500,
  M = 1000
};

int main(void) {
  string Rome;
  int sum;
  
  while(cin >> Rome) {
    sum = 0;
    
    if(Rome.size() == 1) {
      switch(Rome[0]) {
        case 'I' : sum = I;   break;
        case 'V' : sum = V;   break;
        case 'X' : sum = X;   break;
        case 'L' : sum = L;   break;
        case 'C' : sum = C;   break;
        case 'D' : sum = D;   break;
        case 'M' : sum = M;   break;
      }
    } else {
      for(int i = 0; i < Rome.size() - 1; ++i) {
        switch(Rome[i]) {
          case 'I' : {
            if(Rome[i + 1] == 'I') {
              sum += I;
            } else {
              sum -= I;
            }
            break;
          }
          case 'V' :  {
            if(Rome[i + 1] == 'I' || Rome[i + 1] == 'R') {
              sum += V;
            } else {
              sum -= V;
            }
            break;
          }
          case 'X' : {
            if(Rome[i + 1] == 'I' || Rome[i + 1] == 'V' || Rome[i + 1] == 'X') {
              sum += X;
            } else {
              sum -= X;
            }
            break;
          }
          case 'L' : {
            if(Rome[i + 1] != 'C' && Rome[i + 1] != 'D' && Rome[i + 1] != 'M') {
              sum += L;
            } else {
              sum -= L;
            }
            break;
          }
          case 'C' : {
            if(Rome[i + 1] != 'D' && Rome[i + 1] != 'M') {
              sum += C;
            } else {
              sum -= C;
            }
            break;
          }
          case 'D' : {
            if(Rome[i + 1] != 'M') {
              sum += D;
            } else {
              sum -= C;
            }break;
          }
          case 'M' : {
            sum += M;
            break;
          }
        }
      }
      switch(Rome[Rome.size() - 1]) {
        case 'I' : sum += I;   break;
        case 'V' : sum += V;   break;
        case 'X' : sum += X;   break;
        case 'L' : sum += L;   break;
        case 'C' : sum += C;   break;
        case 'D' : sum += D;   break;
        case 'M' : sum += M;   break;
      }
    }
    
    cout << sum << endl;
  }
  return 0;
}