#include <iostream>
using namespace std;
int main()
{
    string name;
    int count=0;
    cout << "Enter a name: ";
    cin >> name;
    cout << "Number of Vowels =";
    for(int i=0;i<=name.length()-1;i++)
    {
        char ch = tolower(name[i]);
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
            count++;
    }
    cout << count << endl;
    return 0;
}
