#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int gcd, lcm, x = a, y = b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    cout << "LCM = " << lcm << endl;
    return 0;
}
