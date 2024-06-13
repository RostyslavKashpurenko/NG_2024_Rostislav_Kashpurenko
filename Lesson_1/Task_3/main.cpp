#include <iostream>

using namespace std;

int main() {

    double earnings;
    cout << "How much do you earn? ";
    cin >> earnings;


    if (earnings < 1000) {

        cout << "Work more" << endl;
    }


    if (earnings > 999) {

        if (earnings > 999999) {
            cout << "You are millionaire!" << endl;
        }

        if (earnings < 1000000) {
            cout << "You work good!" << endl;
        }
    }

    cout << "But you are great!" << endl;
    return 0;
}
