#include <iostream>
using namespace std;
int main()
{
    double a;
    cout << "Enter the number you want the table of ";
    cin >> a;
    for (int i = 1; i <= 12; i++)
    {
        cout << a << "*" << i << "=" << a * i << endl;
    }
}