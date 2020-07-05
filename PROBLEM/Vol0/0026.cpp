// Drop Ink

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

enum {
    Up,
    UpLeft,
    Left,
    DownLeft,
    Down,
    DownRight,
    Right,
    UpRight,
    DirectionMax
};

int Direction[][2] = {
    {0, -1},  // Up
    {-1, -1}, // UpLeft
    {-1, 0},  // Left
    {-1, 1},  // DownLeft
    {0, 1},   // Down
    {1, 1},   // DownRight
    {1, 0},   // Right
    {1, -1}   // UpRight
};

void DropInk(int paper[10][10], int x, int y, int s);
void Show(const int paper[10][10]);

int main(void) {
    int paper[10][10] = {{}};
    int x, y, s;
    
    while(scanf("%d,%d,%d", &x, &y, &s) != EOF) {
        DropInk(paper, x, y, s);
    }
    
    Show(paper);
}

void DropInk(int paper[10][10], int x, int y, int s) {
// s = 1(small), 2(medium), 3(large)
    int X, Y;
    ++paper[x][y];
    switch(s) {
        case 1 : { // UP, Left, Down, Right
            for(int i = 0; i < DirectionMax; i+=2) {
                X = x + Direction[i][0];
                Y = y + Direction[i][1];
                if(0 <= X && X < 10 && 0 <= Y && Y < 10) {
                    ++paper[X][Y];
                }
            }
            break;
        }
        case 2 : { // All Direction
            for(int i = 0; i < DirectionMax ; ++i) {
                X = x + Direction[i][0];
                Y = y + Direction[i][1];
                if(0 <= X && X < 10 && 0 <= Y && Y < 10) {
                    ++paper[X][Y];
                }
            }
            break;
        }
        case 3 : { // All Direction + a
            for(int i = 0; i < DirectionMax; ++i) {
                X = x + Direction[i][0];
                Y = y + Direction[i][1];
                if(0 <= X && X < 10 && 0 <= Y && Y < 10) {
                    ++paper[X][Y];
                }
                if(i == Up || i == Left || i == Down || i == Right) {
                    X += Direction[i][0];
                    Y += Direction[i][1];
                    if(0 <= X && X < 10 && 0 <= Y && Y < 10) {
                        ++paper[X][Y];
                    }
                }
            }
            break;
        }
    }
}

void Show(const int paper[10][10]) {
    int count0 = 0;
    int dark = 0;
    for(int x = 0; x < 10; ++x) {
        for(int y = 0; y < 10; ++y) {
            if(paper[x][y] == 0) {
                ++count0;
            }
            if(paper[x][y] > dark) {
                dark = paper[x][y];
            }
        }
    }
    cout << count0 << endl;
    cout << dark << endl;
}