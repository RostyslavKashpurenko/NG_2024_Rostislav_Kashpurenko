#include <iostream>

using namespace std;

const int NUM_ACCOUNTS = 10;


int main() {
    int accounts[NUM_ACCOUNTS] = {0};

    while (true) {
        int acc_num, choice, amount;

        cout << "Enter account number (0-9): ";
        cin >> acc_num;

        cout << "Enter 1 to deposit, 2 to withdraw: ";
        cin >> choice;

        cout << "Enter amount: ";
        cin >> amount;

        if (choice == 1) {
            accounts[acc_num] += amount;
        }
        if (choice == 2) {
            if (accounts[acc_num] >= amount) {
            accounts[acc_num] -= amount;
            }
            else
            {
            cout << "Not enough funds" << endl;
            }
        }

        cout << "Account balances:\n";
        for (int value = 0; value < NUM_ACCOUNTS; ++value) {
            cout << "Account " << value << ": $" << accounts[value] << endl;
        }

        int max = accounts[0];
        int min = accounts[0];

        for (int value = 1; value < NUM_ACCOUNTS; ++value) {
            if (accounts[value] > max) {
                max = accounts[value];
            }
            if (accounts[value] < min) {
                min = accounts[value];
            }
        }

        cout << "Maximum balance: $" << max << endl;
        cout << "Minimum balance: $" << min << endl;
    }

    return 0;
}
