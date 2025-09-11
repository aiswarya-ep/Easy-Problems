#include <iostream>
using namespace std;
int exponent(int a,int b)
{
    if (b==0)
     return 1;
    else
     return a*exponent(a,b-1);
}

int main()
{
    int a, b,ans;
    cout << "Enter base number and its exponent:";
    cin >> a >> b;
    ans=exponent(a,b);
    cout << "POWER OF " << a << " RAISED TO "<<b<<" IS "<< ans;
    return 0;
}
