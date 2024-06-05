#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Num0 = 0;
    float Num1 = 0;
    int operation;

    cout << "Enter first number: ";
    cin >> Num0;
    cout << "Enter second number: ";
    cin >> Num1;
    cout << "Enter operation: 1-'+', 2-'-', 3-'*', 4-/, 5-'pow', 6-'sqrt' (first number)\n";
    cin >> operation;

    switch(operation)
    {
    case 1:
        cout << Num0 + Num1;
        break;
    case 2:
        cout << Num0 - Num1;
        break;
    case 3:
        cout << Num0 * Num1;
        break;
    case 4:
        cout << Num0 / Num1;
        break;
    case 5:
        cout << pow(Num0,Num1);
        break;
    case 6:
        cout <<sqrt(Num0);
        break;
    }
    return 0;
}
