#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,product;
    cout<<"product of first 10 natural numbers are:";
    for(i=1;i<=10;i++)
    {
        product+=i;
        cout<<product<<"\n";
    }

    return 0;
}
