
#include <iostream>
#include <iomanip>
using namespace std;

// Name: Muhammad Zoraiz Sultan
// Roll No: 0122

int main()
{
    int subjects, counter, marks;
    double total = 0, average;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    if (subjects <= 0)
    {
        cout << "Invalid number of subjects" << endl;
    }
    else
    {
        counter = 1;

        while (counter <= subjects)
        {
            cout << "Enter marks of subject " << counter << ": ";
            cin >> marks;

            total = total + marks;

            counter++;
        }

        average = total / subjects;

        cout << fixed << setprecision(2);

        cout << "Total marks: " << total << endl;
        cout << "Average marks: " << average << endl;
    }

    return 0;
}
