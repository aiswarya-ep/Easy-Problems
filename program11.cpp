#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    float sum,avg;
    cout << "enter three numbers:\n";
    cin>>x>>y>>z;
    sum=x+y+z;
    avg=sum/3;
    cout<<"\navg is:"<<avg;
    return 0;
}
