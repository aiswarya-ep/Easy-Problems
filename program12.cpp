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
        cout<<"\nfirst number is greater";
    }
    else
    {
        cout<<"\n2nd number is greater";
    }
    return 0;
}
