#include <iostream>
using namespace std;
int main()
{
    int n,temp,digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp=n;
    while (temp > 0)
    {
        digit=temp%10;
        sum = sum + (digit*digit*digit);
        temp /= 10;
    }
    if(n==sum)
    {
        cout <<n<< " is an armstrong number";
    }
    else
    {
        cout <<n<< " is not an armstrong number";
    }

    return 0;
}
