#include <iostream>
using namespace std;
// function to find the square of i
double square(double i)
{
    return i * i;
}
// function to find the cube of i
double cube(double i)
{
    return i * i * i;
}

int main()
{
    // declare variable and take input
    double i;
    cout << "enter the number you want the square and cube of" << endl;
    cin >> i;
    // function calling
    double squared = square(i);
    double cubed = cube(i);
    //  print the cube and square of the numbers
    cout << "The square of " << i << " is " << squared << endl;
    cout << "The cube of " << i << " is " << cubed << endl;
}