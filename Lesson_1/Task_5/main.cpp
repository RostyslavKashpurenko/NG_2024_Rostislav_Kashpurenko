#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Num0 = 0;
    float Num1 = 0;
    float Num2 = 0;


    cout << "Number 'a': ";
    cin >> Num0;
    cout << "Number 'b': ";
    cin >> Num1;
    cout << "Number 'c': ";
    cin >> Num2;

    float Desc = pow(Num1, 2) - 4 * Num0 * (-1 * Num2);
    float x1 = (-Num1 + sqrt(Desc)) / (2 * Num0);
    float x2 = (-Num1 - sqrt(Desc)) / (2 * Num0);
    if (Desc < 0)
    {
        cout << "No solution..." << endl;

        return 0;
    }
    else
    {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;

        return 0;
    }

}
