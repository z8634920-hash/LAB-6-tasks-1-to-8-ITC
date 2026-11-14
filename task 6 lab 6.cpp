
#include <iostream>
using namespace std;

// Name: Your Name
// Roll No: Your Roll Number

int main()
{
    int number, temp, digit, reversed;

    reversed = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Invalid number" << endl;
    }
    else
    {
        temp = number;

        while (temp > 0)
        {
            digit = temp % 10;

            reversed = reversed * 10 + digit;

            temp = temp / 10;
        }

        cout << "Reversed number: " << reversed << endl;

        if (reversed == number)
        {
            cout << number << " is a palindrome" << endl;
        }
        else
        {
            cout << number << " is not a palindrome" << endl;
        }
    }

    return 0;
}
