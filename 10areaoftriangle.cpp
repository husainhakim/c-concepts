#include <iostream>
using namespace std;
int main()
{
    float b, h, a;
    int choice;
    do
    {
        cout << "Type '1' for equilateral triangle and'2' for normal triangle" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value of base and height" << endl;
            cin >> b >> h;
            cout << "The area of the triangle is " << b * h / 2 << endl;
            break;
        case 2:
            cout << "Enter the value of a side of a triangle " << endl;
            cin >> a;
            cout << "The area of the equilateral triangle is " << 1.732 * a * a / 4 << endl;
            break;
        case 3:
            cout << "Execution ends over here" << endl;
        default:
            cout << "Invalid choice please re-enter the number" << endl;
        }
    } while (choice != 3);
    return 0;
}