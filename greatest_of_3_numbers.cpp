#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "enter 3 numbers:\n";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"First number is greater";
    }
    else if(b>a && b>c)
    {
        cout<<"2nd number is greater";

    }
    else
    {
        cout<<"3rd number is greater";
    }

    return 0;
}
