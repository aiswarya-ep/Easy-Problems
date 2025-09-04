#include <iostream>
using namespace std;
int main() {
    int n;
    bool flag = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1)
    {
        flag = false;
    }
    else
    {
        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
        cout << n << " is a Prime number." << endl;
    else
        cout << n << " is NOT a Prime number." << endl;
    return 0;
}
