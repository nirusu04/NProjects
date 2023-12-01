//Sampada Niroula
//9/20/2023
//CS1428 Lab 18
//Lab 3

//Description: this program will allow the user to play a game of Orange,
//  Yellow, Blue Lizard against a randomized computer opponent


#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {

    // Seed the random number generator
    srand(time(0));

    // Display menu options

    cout << "Natural Selection Game" << endl;
    cout << "1. Orange" << endl;
    cout << "2. Blue" << endl;
    cout << "3. Yellow" << endl;
    cout << "Enter a number: ";

    int playerChoice;
    cin >> playerChoice;

    // Check

    if (playerChoice < 1 || playerChoice > 3) {
        cout << "ERROR - Invalid Input. Terminating Program." << endl;
        return -1;
    }

    // Generate a random choice for the computer

    int computerChoice = rand() % 3 + 1;

    // Determine the winner

    if (playerChoice == computerChoice) {
        cout << "You both chose ";
        if (playerChoice == 1) cout << "orange!";
        else if (playerChoice == 2) cout << "blue!";
        else cout << "yellow!";

        cout << " It's a tie!" << endl;

    } else if ((playerChoice == 1 && computerChoice == 2) ||
               (playerChoice == 2 && computerChoice == 3) ||
               (playerChoice == 3 && computerChoice == 1)) {

        cout << "Blue beats ";

        if (playerChoice == 1) cout << "orange!";
        else if (playerChoice == 2) cout << "yellow!";
        else cout << "blue!";

        cout << " You lose!" << endl;

    } else {
        cout << "Your ";
        if (playerChoice == 1) cout << "orange";
        else if (playerChoice == 2) cout << "blue";
        else cout << "yellow";

        cout << " beats ";
        if (computerChoice == 1) cout << "orange!";
        else if (computerChoice == 2) cout << "blue!";
        else cout << "yellow!";

        cout << " You win!" << endl;
    }

    return 0;
}
