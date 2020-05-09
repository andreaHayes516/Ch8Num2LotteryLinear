/************************************************
** Author: Andrea Hayes
** Date: May 9, 2020
** Purpose: Match lottery ticket numbers
** Input: Array's for numbers played and lottery number
** Processing: Linear Search
** Output: Display if any numbers match
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int linearSearch(int[], int, int);
int main() {

    int lottery, user[] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
    int results;

        cout << "Enter the lottery numbers(no spaces): ";
        cin >> lottery;

        results = linearSearch(user, 10, lottery);

        if (results == -1) {
            cout << "You did not match numbers";
        }
        else {
            cout << "You matched!";
        }
    return 0;
}
int linearSearch(int user[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found) {
        if (user[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}