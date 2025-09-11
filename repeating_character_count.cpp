#include <iostream>
using namespace std;
int main()
{
    string name;
    char ch;
    int count=0;
    cout << "Enter a name: ";
    cin >> name;
    cout << "Enter a character to count: ";
    cin >> ch;
    for(int i=0;i<=name.length()-1;i++)
    {
        if(name[i]==ch)
            count++;
    }
    cout << "NUMBER OF TIME THAT PARTICULAR CHARACTER HAVE REPEATED IN THE STRING = " << count << endl;
    return 0;
}
