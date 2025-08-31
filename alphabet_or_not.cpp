#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a character:\n";
    cin>>ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))    {
        cout<<"\nthe character you've entered is an alphabet";
    }
    else
    {
        cout<<"\nthe character you've entered is not an alphabet";
    }

    return 0;
}
