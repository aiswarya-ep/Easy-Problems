#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is NOT valid." << endl;
    }
    return 0;
}
