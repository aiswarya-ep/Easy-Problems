#include <iostream>
using namespace std;

int main()
{
    int m;
    char grade;
    cout << "enter the marks(out of 100):\n";
    cin>>m;
    if(m>=100)
        grade='A+';
    else if(m>=90)
        grade='A';
    else if(m>=80)
        grade='B=';
    else if(m>=70)
        grade='B';
    else if(m>=60)
        grade='C+';
    else if(m>=50)
        grade='C';
    else if(m>=40)
        grade='P';
    else
        grade='F';
    cout<<"Your grade is:"<<grade;

    return 0;
}
