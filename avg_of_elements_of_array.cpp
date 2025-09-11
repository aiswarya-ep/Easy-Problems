#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], sum = 0;
    float avg;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg=sum/n;
    cout << "Avg of all elements: " << avg << endl;
    return 0;
}
