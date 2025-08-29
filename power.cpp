#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,exp;
    double ans;
    cout << "enter number: ";
    cin>>num;
    cout << "enter exponent: ";
    cin>>exp;
    ans=pow(num,exp);
    cout << "value of the number raised to this exponent value is: \n"<<ans;
    return 0;
}
