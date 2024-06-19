#include <iostream>

using namespace std;

int main() {
    int num, maxNum = 20;

    cout << "Enter value: ";
    cin >> num;

    if (num != 0) {
        for (int amount = 1; amount <= num; amount++) {
            for (int value = 1; value <= num - amount; value++) {
                cout << " ";
            }
            for (int symbols = 1; symbols <= 2 * amount - 1; symbols++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}
