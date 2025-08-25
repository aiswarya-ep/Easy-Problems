#include <iostream>
using namespace std;

int main()
{
    int a=10,b=20;
    int temp;
    cout << "value of a before swapping:"<<a;
    cout << "\nvalue of b before swapping:"<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n";
    cout << "\nvalue of a after swapping:"<<a;
    cout << "\nvalue of b after swapping:"<<b;
    return 0;
}
