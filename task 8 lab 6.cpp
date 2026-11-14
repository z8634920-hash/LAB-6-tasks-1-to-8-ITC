
#include <iostream>
using namespace std;

// Name: Your Name
// Roll No: Your Roll Number

int main()
{
    // Part A: Prime Number

    int number, divisor, divisorCount;

    divisorCount = 0;

    cout << "Enter a number to check: ";
    cin >> number;

    if (number <= 1)
    {
        cout << "Invalid: enter a number greater than 1" << endl;
    }
    else
    {
        divisor = 2;

        while (divisor <= number - 1)
        {
            if (number % divisor == 0)
            {
                divisorCount++;
            }

            divisor++;
        }

        if (divisorCount == 0)
        {
            cout << number << " is a prime number" << endl;
        }
        else
        {
            cout << number << " is not a prime number" << endl;

            cout << "Divisors between 2 and " << number - 1
                << ": " << divisorCount << endl;
        }
    }

    // Part B: Fibonacci Series

    int terms, first, second, next, counter;

    first = 0;
    second = 1;

    cout << "Enter number of Fibonacci terms: ";
    cin >> terms;

    if (terms <= 0)
    {
        cout << "Invalid number of terms" << endl;
    }
    else
    {
        counter = 1;

        cout << "Fibonacci series: ";

        while (counter <= terms)
        {
            cout << first << " ";

            next = first + second;
            first = second;
            second = next;

            counter++;
        }
    }

    return 0;
}
