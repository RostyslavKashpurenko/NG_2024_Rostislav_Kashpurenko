#include <iostream>

using namespace std;

int main()
{

    int money = 0;
    bool condition = true;

    cout << "How much $ do you earn?" << endl;
    cin >> money;

    if (money < 1000)
    {
        cout << "Work more";

    }

    if (money > 999)
    {
        if (money > 999999)
        {
            condition = false;
            cout << "You are a millionare";

        }
        if (condition == true) {
        cout << "Well done";
        }
    }



    cout << ", but you are great! " << endl;

    return 0;
}
