#include <iostream>

using namespace std;

int power(int, int);
int main()
{
    cout << "Press Ctrl-C to stop" << endl;
    int base;
    int exponent;

    while(true)
    {
        cout << "Enter a number: ";
        cin >> base;
        cout << "Enter the power you want to raise the number to: ";
        cin >> exponent;
        cout << "The result is " << power(base, exponent) << endl;
    }

    return 0;
}

int power(int base, int exponent)
{
    int result = 1;
    for (int i = exponent; i > 0; i--)
    {
        result *= base;
    }

    return result;
}
