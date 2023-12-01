//Sampada Niroula
//10/04/2023
//CS1428 Lab18
//Lab 5
//This program will print the first n factorials

#include <iostream>
using namespace std;

int main()
 {
    int num;
   int sum= 0 ;
    cout << "Enter a number to find its factorial (0-12): ";
    cin >> num;

    if (num < 0 || num > 12) {
        cout << "ERROR: Valid numbers are 0 to 12" << endl;
        return 1; // Exit with an error code
    }

    cout << "+" << num << " = ";

    if (num == 0)
        {
        cout << "1";
         }

    else

     {
        for (int i = 0; i <= num; i++) {
            sum +=i;
            cout << i;
            if (i < num) {

                cout << " + ";

}
        }

    }

    cout << " = " << sum << endl;

    return 0;
}
