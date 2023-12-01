// Name Sampada Niroula
// Net Id- ymy17
// Pre lab Assignment 3

#include <iostream>
#include <ctime>   // for seeding rand
#include <cstdlib>  // C standard Library

using namespace std;

int main()
{
    int rand_integer;

    // seeds rand (needed for getting random numbers)

    srand(time(NULL));

       // randomly generates a number 1 - 20 inclusively

    rand_integer = rand() % 20 + 1;

    cout << "You roll a " << rand_integer << ": ";

    // Check if it's a critical hit (rolling a 20)
    if (rand_integer == 20) {
        cout << "CRITICAL HIT!!" << endl;
    }
    // Check if the attack strikes (rolling between 11 and 19 inclusive)

    else if (rand_integer >= 11 && rand_integer <= 19) {
        cout << "Attack Strikes" << endl;
    }
    // If neither of the above conditions are met, the attack misses
    else {
        cout << "Attack Misses" << endl;
    }

    return 0;
}

