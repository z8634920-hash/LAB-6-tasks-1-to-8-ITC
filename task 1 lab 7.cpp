task 1:

// Name: Muhammad Zoraiz Sultan
// Roll No: 0122

#include <iostream>
using namespace std;

int main()
{
    int n, counter;

    cout << "Enter a number (n): ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid: n must be greater than 0";
    }
    else
    {
        counter = 1;

        cout << "Counting up: ";
        while (counter <= n)
        {
            cout << counter << " ";
            counter++;
        }

        cout << endl;

        counter = n;

        cout << "Counting down: ";
        while (counter >= 1)
        {
            cout << counter << " ";
            counter--;
        }
    }

    return 0;
}
