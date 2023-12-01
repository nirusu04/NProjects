//Name- Sampada Niroula
//Date- 11/01/2023
//CS1428 Lab 18
//Lab 9


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {


    const int SIZE = 7;

    const string WEEK[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday"};

    double distances[SIZE];
    double total = 0;
    double average;
    int shortest_index = 0;

    cout << "Please enter the distance run." << endl;

    for (int i = 0; i < SIZE; i++)
        {
        cout << WEEK[i] << " : ";
        cin >> distances[i];
    }

    for (int i = 0; i < SIZE; i++)

        {
        total += distances[i];

        if (distances[i] < distances[shortest_index])

         {
            shortest_index = i;
        }
    }

    average = total / SIZE;

    cout << fixed << setprecision(2);


    cout << "Total distance: " << total  << endl;

    cout << "Average distance: " << average << endl;

    cout << "Shortest distance: " << distances[shortest_index]

                  <<" miles on " << WEEK[shortest_index] << endl;

    return 0;
}
