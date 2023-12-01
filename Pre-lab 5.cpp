//Sampada Niroula
//10/04/2023
//CS1428 L18
// Pre-lab 5


// Finish the following program which adds up all
// integers from 1 to the user's given number inclusively
// using a FOR loop. The total should be assigned to the variable 'total'.

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;  // Initialize the sum to 0

    cout << "Enter a positive integer to find the summation of"
         << " all numbers from 1 to the given number." << endl;
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        sum += i;  // Add the current number to the sum
    }

    cout << "Total : " << sum << endl;

    return 0;
}
