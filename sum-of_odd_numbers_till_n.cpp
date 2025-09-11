#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout << "Enter the limit ";
    cin >> num;
    cout<<"Odd numbers till the given limit are";
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            cout<< "\n"<<i <<endl;
            sum+=i;
        }
    }
    cout<<"sum is:"<<sum;
    return 0;
}
