#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    bool dig = false;
    cout << "Enter a string: ";
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            dig = true;
            break;
        }
    }
    if (dig)
        cout << "The string contains at least one digit." << endl;
    else
        cout << "The string does not contain any digits." << endl;
    return 0;
}
