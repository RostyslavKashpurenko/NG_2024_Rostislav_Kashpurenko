#include <iostream>

using namespace std;

int main()
{

    int money = 0;

    cout << "How much $ do you earn?" << endl;
    cin >> money;

    if (money < 1000)
    {
        cout << "Work more!" << endl;

    }

    if (money > 999)
    {
        if (money > 999999)
        {
            cout << "You are a millionare!!" << endl;
            cout << "But you are great! " << endl;

            return 0;

        }
        cout << "Well done!" << endl;
    }

    cout << "But you are great! " << endl;

}
