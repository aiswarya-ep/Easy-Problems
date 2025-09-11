#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter a name: ";
    cin>>name;
    for(int i=name.length()-1;i>=0;i--)
        cout << "character "<< i+1 <<" = " << name[i] << endl;
    return 0;
}
