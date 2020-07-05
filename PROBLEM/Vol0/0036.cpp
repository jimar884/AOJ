#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
  string board[8];
  bool check;
  
  while(cin >> board[0]) {
    check = false;
    for(int i = 1; i < 8; ++i) {
      cin >> board[i];
    }
    for(int i = 0; i < 8; ++i) {
      for(int j = 0; j < 8; ++j) {
        if(board[i][j] == '1' && !check) {
          if(i <= 4 && board[i + 3][j] == '1') {
            cout << "B" << endl;
            check = true;
          } else if(j <= 4 &&  board[i][j + 3] == '1') {
            cout << "C" << endl;
            check = true;
          } else if(i <= 5 && j >= 1 && board[i + 2][j - 1] == '1') {
            cout << "D" << endl;
            check = true;
          } else if(i <= 6 && j <= 5 && board[i + 1][j + 2] == '1') {
            cout << "E" << endl;
            check = true;
          } else if(i <= 5 && j <= 6 && board[i + 2][j + 1] == '1') {
            cout << "F" << endl;
            check = true;
          } else if(i <= 6 && 1 <= j && j <= 6 &&board[i + 1][j - 1] == '1') {
            cout << "G" << endl;
            check = true;
          } else if(i <= 6 && j <= 6){
            cout << "A" << endl;
            check = true;
          }
        }
      }
    }
  }
  return 0;
}