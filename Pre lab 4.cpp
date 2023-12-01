//Sampada Niroula
//CS.1428 L.18
//Date-9/27/2023

// PreLab 4 Assignment

// The following is an extremely scientific personality test that can predict
// how well you will do in this course.
// Fill in the area below with the requested code.

#include <iostream>

using namespace std;

int main()
{
    char ans;
    string mesz;

    cout << "Is Sampada better than Everyone? ('Y' or 'N')" << endl;
    cin >> ans;

    switch (ans)
    {
    case 'y':
    case 'Y':
        cout << "You think Sampada is the best..." << endl;
        mesz = " DUH you are absolutely right!";
        break;

    case 'n':
    case 'N':
        cout << "You do not think Kirk is better than Piccard..." << endl;
        mesz = "Correct!";
        break;

    default:
        mesz = "Invalid Input.";
    }

    cout << mesz << endl;

    return 0;
}
