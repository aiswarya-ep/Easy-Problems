#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin>>str;
    string upper = str;
    for (int i = 0; i < upper.length(); i++)
    {
        upper[i] = toupper(upper[i]);
    }
    cout << "Uppercase: " << upper << endl;
    string lower = str;
    for (int i = 0; i < lower.length(); i++)
    {
        lower[i] = tolower(lower[i]);
    }
    cout << "Lowercase: " << lower << endl;

    return 0;
}
