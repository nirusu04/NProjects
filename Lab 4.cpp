//Sampada Niroula
//09/27/23
//CS1428
//Lab.18

//Description: this program will calculate the grocery bill
//based on user input

#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
    int price;

    cout << " enter the price" << endl;
     cin>> price;

Switch(price)
{
case 10:
    {
        cout<< " not expensive" << endl;
    break;
    }


case 100:
    {
         cout << " expensive " << endl;

    }

case 500:
case 1000:
    {
         cout <<" very expensive " << endl;

default:

    cout << " Price Unknown" << endl;
    }
    return 0;

}
