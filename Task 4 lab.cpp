
#include <iostream>
using namespace std;

// Name: Your Name
// Roll No: Your Roll Number

int main()
{
    int n, factorial, base, exponent, power, counter;

    // Part A: Factorial

    cout << "Enter n (0-12): ";
    cin >> n;

    if (n >= 0)
    {
        if (n <= 12)
        {
            factorial = 1;
            counter = 1;

            while (counter <= n)
            {
                factorial = factorial * counter;
                counter++;
            }

            cout << "Factorial of " << n << " = " << factorial << endl;
        }
        else
        {
            cout << "Too large: enter 12 or less" << endl;
        }
    }
    else
    {
        cout << "Invalid: n cannot be negative" << endl;
    }

    // Part B: Power

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    if (exponent < 0)
    {
        cout << "Invalid exponent" << endl;
    }
    else
    {
        power = 1;
        counter = 1;

        while (counter <= exponent)
        {
            power = power * base;
            counter++;
        }

        cout << base << " raised to " << exponent << " = " << power << endl;
    }

    return 0;
}
