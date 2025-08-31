#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill=0;
    cout << "Enter total units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 15;
    }
    cout << "Electricity Bill is " << bill;
    return 0;
}
