#include <iostream>

using namespace std;

int main()
{
    int zp = 0 ;
    cout << "How much do you earn? " << endl;
    cin >> zp;
    if (zp < 1001){

        cout << "Earn more";

        cout << ", but you are great!" << endl;

        return 0;
    }

    if (zp < 1000001){

      cout << "Well done!";

        cout << " You are great!" << endl;
        return 0;
    }
    cout << "You are a millionaire!!!";

    cout << " You are great!" << endl;

    return 0;
}
