#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a character:\n";
    cin>>ch;
    if (ch >='0' && ch <='9')
    {
        cout<<"\nthe character you've entered is a digit";
    }
    else
    {
        cout<<"\nthe character you've entered is not a digit";
    }

    return 0;
}
