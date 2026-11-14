
#include <iostream>
#include <iomanip>
using namespace std;

// Name: Your Name
// Roll No: Your Roll Number

int main()
{
    int marks, count, highest, lowest;
    double total, average;

    count = 0;
    total = 0;
    highest = 0;
    lowest = 100;

    cout << "Enter marks (-1 to stop): ";
    cin >> marks;

    while (marks != -1)
    {
        if (marks >= 0)
        {
            if (marks <= 100)
            {
                total = total + marks;
                count++;

                if (marks > highest)
                {
                    highest = marks;
                }

                if (marks < lowest)
                {
                    lowest = marks;
                }
            }
            else
            {
                cout << "Invalid marks. Enter 0 to 100" << endl;
            }
        }
        else
        {
            cout << "Invalid marks. Enter 0 to 100" << endl;
        }

        cout << "Enter marks (-1 to stop): ";
        cin >> marks;
    }

    if (count == 0)
    {
        cout << "No marks were entered" << endl;
    }
    else
    {
        average = total / count;

        cout << fixed << setprecision(2);

        cout << "Valid entries: " << count << endl;
        cout << "Highest: " << highest << endl;
        cout << "Lowest: " << lowest << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }

    return 0;
}
