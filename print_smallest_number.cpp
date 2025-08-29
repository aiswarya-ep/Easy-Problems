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
    if (x<y)
    {
        cout<<"\nleast number is"<<x;
    }
    else
    {
        cout<<"\nleast number is"<<y;
    }

    return 0;
}
