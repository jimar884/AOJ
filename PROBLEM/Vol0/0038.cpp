#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

enum {
  null = 0,
  one_pair = 1,
  two_pair = 2,
  three_card = 3,
  four_card = 4,
  full_house = 5,
  straight = 6,
};

int main(void) {
  int card[5];
  int pattern;
  
  while(scanf("%d,%d,%d,%d,%d", &card[0],&card[1],&card[2],&card[3],&card[4]) != EOF) {
    sort(card, card + 5);
    
    pattern = null;
    
    // �X�g���[�g
    bool check = true;
    for(int i = 0; i < 4; ++i) {
      if(card[i + 1] != card[i] + 1) {
        check = false;
      }
    }
    if(card[0] == 1 && card[1] == 10 && card[2] == 11 && card[3] == 12 && card[4] == 13) {
      check = true;
    }
    if(check) {
      pattern = straight;
    }
    
    // �����y�A�E�c�[�y�A
    int count = 0;
    for(int i = 0; i < 4; ++i) {
      if(card[i] == card[i + 1]) {
        ++count;
      }
    }
    if(count == 1) {
      pattern = one_pair;
    }
    if(count == 2) {
      pattern = two_pair;
    }
    
    // �X���[�J�[�h
    if(card[0] == card[2] || card[1] == card[3] || card[2] == card[4]) {
      pattern = three_card;
    }
    
    // �t�H�[�J�[�h
    if(card[0] == card[3] || card[1] == card[4]) {
      pattern = four_card;
    }
    
    // �t���n�E�X
    if((card[0] == card[1] && card[2] == card[4]) || (card[0] == card[2] && card[3] == card[4])) {
      pattern = full_house;
    }
    switch(pattern) {
      case null       : cout << "null" << endl;         break;
      case one_pair   : cout << "one pair" << endl;     break;
      case two_pair   : cout << "two pair" << endl;     break;
      case three_card : cout << "three card" << endl;   break;
      case four_card  : cout << "four card" << endl;    break;
      case full_house : cout << "full house" << endl;   break;
      case straight   : cout << "straight" << endl;     break;
    }
  }
  return 0;
}