#include <iostream>
using namespace std;

int main()
{
    int num, org,rev= 0,digit;
    cout << "Enter a number: ";
    cin >> num;
    org = num;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (org == rev)
        cout << org << " is a palindrome number.";
    else
        cout << org << " is not a palindrome number.";

    return 0;
}
