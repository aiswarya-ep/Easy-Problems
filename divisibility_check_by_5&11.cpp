#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a number:\n";
    cin>>a;
    if (a%5==0)
    {
        cout<<"\nthe nuber youve entered is divisible by 5";
    }
    else if(a%11==0)
    {
        cout<<"\nthe nuber youve entered is divisible by 11";
    }
    else
    {
        cout<<"\nthe number is neither divible by 5 nor 11";

    }

    return 0;
}
