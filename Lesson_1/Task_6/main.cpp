#include <iostream>

using namespace std;

int main()
{
    int height = 0;

    cout << "Enter size: ";
    cin >> height;

    cout << endl;

    for (int branch = 1; branch <= height; branch++)
    {
        int stars = (branch * 2) - 1;

        int space = height - branch + 1;

        for (int snow = 0; snow < space; snow++)
            cout << " ";

        for (int snow = 0; snow < stars; snow++)
            cout << "*";

        cout << endl;
    }

    for (int branch = 0; branch < 1; branch++)
    {

        for (int snow = 0; snow < height; snow++)
            cout << " ";


        cout << "*";
        cout << endl;
    }

    return 0;
}
