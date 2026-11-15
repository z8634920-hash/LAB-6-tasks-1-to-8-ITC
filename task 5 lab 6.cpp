
#include <iostream>
using namespace std;

// Name: Muhammad Zoraiz Sultan
// Roll No: 0122

int main()
{
    int number, temp, digit;
    int digitCount, digitSum, evenCount, oddCount;

    // Initialize counters and sum
    digitCount = 0;
    digitSum = 0;
    evenCount = 0;
    oddCount = 0;

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

            digitCount++;
            digitSum = digitSum + digit;

            if (digit % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }

            temp = temp / 10;
        }

        cout << "Number: " << number << endl;
        cout << "Number of digits: " << digitCount << endl;
        cout << "Sum of digits: " << digitSum << endl;
        cout << "Even digits: " << evenCount << endl;
        cout << "Odd digits: " << oddCount << endl;
    }

    return 0;
}
