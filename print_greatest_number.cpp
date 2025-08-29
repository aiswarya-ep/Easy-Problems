#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "enter two numbers:\n";
    cout<<"\nnumber 1:";
    cin>>x;
    cout<<"\nnumber 2:";
    cin>>y;
    if (x>y)
    {
        cout<<"\nlargest number is"<<x;
    }
    else
    {
        cout<<"\nlargest number is"<<y;
    }

    return 0;
}
