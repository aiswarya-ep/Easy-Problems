#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, root1, root2, real, img;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else
    {
        real = -b / (2 * a);
        img = sqrt(-d) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << real << " + " << img << "i" << endl;
        cout << "Root 2 = " << real << " - " << img << "i" << endl;
    }
    return 0;
}
