//Sampada Niroula
//NetID- ymy17
//Date-11/15/2023
//CS 1428 L18

#include <iostream>
#include <fstream>

using namespace std;

struct Turtle
{
    string name;
    string breed;
    char gender;
    int age;
};

int main()
{
    // Create a Turtle object named "turtle1"

    Turtle turtle1;
    turtle1.name = "Bobby";
    turtle1.gender = 'M';
    turtle1.age = 5;
    turtle1.breed = "Eastern Box";

    // Create a Turtle object named "turtle2"

    Turtle turtle2;


    cout << "Enter the name of turtle2: ";
    cin >> turtle2.name;

    cout << "Enter the age of turtle2: ";
    cin >> turtle2.age;

    cout << "Enter the gender of turtle2 (M/F): ";
    cin >> turtle2.gender;

    cout << "Enter the breed of turtle2: ";
    cin >> turtle2.breed;


    cout << "Turtle 1 - Name: " << turtle1.name << ", Gender: "
    << turtle1.gender << ", Age: " << turtle1.age << ", Breed: " << turtle1.breed << endl;

    cout << "Turtle 2 - Name: " << turtle2.name << ", Gender: "
    << turtle2.gender << ", Age: " << turtle2.age << ", Breed: " << turtle2.breed << endl;

    return 0;
}
