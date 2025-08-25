 #include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number:\n";
    cin>>n;
    if (n>0)
    {
        cout<<"\npositive number";
    }
    else if (n<0)
    {
        cout<<"\nnegative number";
    }
    else
    {
        cout<<"\nnumber is zero";
    }

    return 0;
}
