#include <iostream>

const int NUM_ACCOUNTS = 10;

void deposit(int accounts[], int acc_num, int amount) {
    accounts[acc_num] += amount;
}

void withdraw(int accounts[], int acc_num, int amount) {
    accounts[acc_num] -= amount;
}

int main() {
    int accounts[NUM_ACCOUNTS] = {0};

    while (true) {
        int acc_num, choice, amount;

        std::cout << "Enter account number (0-9): ";
        std::cin >> acc_num;

        std::cout << "Enter 1 to deposit, 2 to withdraw: ";
        std::cin >> choice;

        std::cout << "Enter amount: ";
        std::cin >> amount;

        if (choice == 1) {
            deposit(accounts, acc_num, amount);
        } else if (choice == 2) {
            withdraw(accounts, acc_num, amount);
        }

        std::cout << "Account balances:\n";
        for (int i = 0; i < NUM_ACCOUNTS; ++i) {
            std::cout << "Account " << i << ": $" << accounts[i] << std::endl;
        }

        int max = accounts[0];
        int min = accounts[0];

        for (int i = 1; i < NUM_ACCOUNTS; ++i) {
            if (accounts[i] > max) {
                max = accounts[i];
            }
            if (accounts[i] < min) {
                min = accounts[i];
            }
        }

        std::cout << "Maximum balance: $" << max << std::endl;
        std::cout << "Minimum balance: $" << min << std::endl;
    }

    return 0;
}
