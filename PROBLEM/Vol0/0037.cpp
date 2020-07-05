/*
#include <iostream>
#include <cstring>
using namespace std;

enum {
  UP = 0,
  DOWN = 1,
  RIGHT = 2,
  LEFT = 3
};

struct human {
  int x, y;
  int direction;
};

int main(void) {
  string grid[9];
  
  for(int i = 0; i < 9; ++i) {
    cin >> grid[i];
  }
  
  human m;
  m.x = 1; 
  m.y = 0; 
  m.direction = RIGHT;
  cout << "R";
  while(! (m.x == 0 && m.y == 0)) {
    switch(m.direction) {
    // 上に進む操作
    case UP :  {
      cout << "U";
      --m.y;
      if(m.y >= 1) {
        if(grid[m.y * 2 - 1][m.x] == '1') {
          break;
        }
      }
      if(m.x == 0) {
        if(grid[m.y * 2][m.x] == '1') {
          m.direction = RIGHT;
          break;
        }
      }
      if(m.x == 1 || m.x == 2 || m.x == 3) {
        if(grid[m.y * 2][m.x] == '1') {
          m.direction = RIGHT;
        }
        if(grid[m.y * 2][m.x - 1] == '1') {
          m.direction = LEFT;
          break;
        }
      }
      if(m.x == 4) {
        if(grid[m.y * 2][m.x - 1] == '1') {
          m.direction = LEFT;
          break;
        }
      }
      break;
    }
    
    // 下に進む操作
    case DOWN : {
      cout << "D";
      ++m.y;
      if(m.y <= 3) {
        if(grid[m.y * 2 + 1][m.x]) {
          break;
        }
      }
      if(m.x == 0) {
        if(grid[m.y * 2][m.x] == '1') {
          m.direction = RIGHT;
          break;
        }
      }
      if(m.x == 1 || m.x == 2 || m.x == 3) {
        if(grid[m.y * 2][m.x - 1] == '1') {
          m.direction = LEFT;
        }
        if(grid[m.y * 2][m.x] == '1') {
          m.direction = RIGHT;
          break;
        }
      }
      if(m.x == 4) {
        if(grid[m.y * 2][m.x - 1] == '1') {
          m.direction = LEFT;
          break;
        }
      }
      break;
    }
    
    // 右に進む操作
    case RIGHT : {
      cout << "R";
      ++m.x;
      if(m.y == 0) {
        if(grid[m.y + 1][m.x] == '1') {
          m.direction = DOWN;
          break;
        }
      }
      if(m.y == 1 || m.y == 2 || m.y == 3) {
        if(grid[m.y * 2 + 1][m.x] == '1') {
          m.direction = DOWN;
        }
        if(grid[m.y * 2 - 1][m.x] == '1') {
          m.direction = UP;
          break;
        }
      }
      if(m.y == 4) {
        if(grid[m.y * 2 - 1][m.x] == '1') {
          m.direction = UP;
          break;
        }
      }
      break;
    }
    
    // 左に進む操作
    case LEFT : {
      cout << "L";
      --m.x;
      if(m.y == 0) {
        if(grid[m.y + 1][m.x] == '1') {
          m.direction = DOWN;
          break;
        }
      }
      if(m.y == 1 || m.y == 2 || m.y == 3) {
        if(grid[m.y * 2 - 1][m.x] == '1') {
          m.direction = UP;
        }
        if(grid[m.y * 2 + 1][m.x] == '1') {
          m.direction = DOWN;
          break;
        }
      }
      if(m.y == 4) {
        if(grid[m.y * 2 - 1][m.x] == '1') {
          m.direction = UP;
          break;
        }
      }
      break;
    }
  }
  }
  cout << endl;
}
*/

#include<iostream>
#include<string>
using namespace std;
struct man{int x,y,d;};
int main(){
  string st[9];
  int i,j,k;
  for(i=0;i<9;i++) cin >> st[i];
  bool f=false,mo=false;
  man m;
  m.x=1;m.y=0;m.d=0;
  int c=0;
  cout << "R";
  while(1){
    c++;
    mo=false;
     
    if(m.x==1&&m.y==1&&m.d==2) {
      //cout << "L";
      break;
    }
    if(m.x==0&&m.y==1&&f) {
      //cout << "U";
      break;
    }
    f=true;
     
    //cout << m.x<<":"<<m.y<<":"<<m.d << endl;
    if(m.d==0){
      if(m.y>0){
    if(st[m.y*2-1][m.x]=='1') {
      cout << "U";
      m.d=3;
      continue;
    }
      }
      if(m.y<5){
    if(st[m.y*2][m.x]=='1') {
      m.x++;
      cout << "R";
      continue;
    }
      }
      if(m.y<4){
    if(st[m.y*2+1][m.x]=='1') {
      m.x++;
      m.y++;
      cout << "D";
      m.d=1;
      continue;
    }
      }
      m.y++;
      cout << "L";
      m.d=2;
      continue;
    }
     
    if(m.d==1){
      if(m.y<5){
    if(st[m.y*2][m.x-1]=='1') {
      cout <<"R";
      m.d=0;
      continue;
    }
      }
      if(m.x>0&&m.y<4){
    if(st[m.y*2+1][m.x-1]=='1') {
      m.y++;
      cout << "D" ;
      mo=true;
      continue;
    }
      }
      if(m.x>1&&m.y<5){
    if(st[m.y*2][m.x-2]=='1') {
      m.x--;
      m.y++;
      cout << "L";
      m.d=2;
      continue;
    }
      }
      m.x--;
      cout << "U";
      m.d=3;
      continue;
    }
    if(m.d==2){
      if(m.x>0){
    if(st[m.y*2-1][m.x-1]=='1') {
      cout << "D";
      m.d=1;
      continue;
    }
      }
      if(m.x>1&&m.y>0){
    if(st[(m.y-1)*2][m.x-2]=='1') {
      m.x--;
      cout << "L" ;
      mo=true;
      continue;
    }
      }
      if(m.x>0&&m.y>1){
    if(st[(m.y-1)*2-1][m.x-1]=='1') {
      m.x--;
      m.y--;
      cout << "U";
      m.d=3;
      continue;
    }
      }
      m.y--;
      cout << "R";
      m.d=0;
      continue;
    }
    if(m.d==3){
 
      if(m.y>0){
    if(st[(m.y-1)*2][m.x-1]=='1') {
      cout << "L";
      m.d=2;
      continue;
    }
      }
      if(m.y>1){
    if(st[(m.y-1)*2-1][m.x]=='1') {
      m.y--;
      cout << "U" ;
      mo=true;
      continue;
    }
      }
      if(m.y>0){
    if(st[(m.y-1)*2][m.x]=='1') {
      m.x++;
      m.y--;
      cout << "R";
      m.d=0;
      continue;
    }
      }
      m.x++;
      cout << "D";
      m.d=1;
      continue;
    }
    //if(!mo)m.d=(m.d+2)%4;
  }
   
  cout  << endl;
  return 0;
}