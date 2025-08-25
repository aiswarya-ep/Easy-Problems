 #include <iostream>
using namespace std;

int main()
{
    int p,t;
    float r,si;
    cout << "enter principal amount:\n";
    cin>>p;
    cout<<"\nenter interest rate:";
    cin>>r;
    cout<<"\nenter the time period in years:";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"\nsimple inerest is:"<<si;
    return 0;
}
