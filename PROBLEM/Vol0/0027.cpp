// Zeller‚ÌŒöŽ®

#include <iostream>
#include <cstring>
using namespace std;

string Day[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

void Day2004(int month, int day);

int main(void) {
    int month, day;
    
    while(cin >> month >> day) {
        if(month == 0 || day == 0) {
            break;
        }
        Day2004(month, day);
    }
}

void Day2004(int month, int day) {
    int y, m, d;
    int DayNumber;
    
    if(month == 1 || month == 2) {
        y = 2003;
        m = month + 12;
        d = day;
    } else {
        y = 2004;
        m = month;
        d = day;
    }
    
    DayNumber = 
        (y + (y / 4) - (y / 100) + (y / 400) + ((13 * m + 8) / 5) + d) % 7;
    
    cout << Day[DayNumber] << endl;
}