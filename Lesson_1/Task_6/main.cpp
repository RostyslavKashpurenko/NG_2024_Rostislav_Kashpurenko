#include <iostream>

using namespace std;

int main()
{
    int height = 0;

    cout << "Enter size: ";
    cin >> height;

    cout << endl;

    for (int a = 1; a <= height; a++)
    {
        int stars = (a * 2) - 1;

        int space = height - a + 1;

        for (int b = 0; b < space; b++)
            cout << " ";

        for (int b = 0; b < stars; b++)
            cout << "*";

        cout << endl;
    }

    for (int a = 0; a < 1; a++)
    {

        for (int b = 0; b < height; b++)
            cout << " ";


        cout << "*";
        cout << endl;
    }

    return 0;
}
