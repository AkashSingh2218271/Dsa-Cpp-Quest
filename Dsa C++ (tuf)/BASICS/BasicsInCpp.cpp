#include <iostream>
using namespace std;

int main()
{
    // ~ Printing or Output
    cout << "Hello!\n";
    cout << "Hello!" << endl;

    // ~ Input
    int x;
    cout << "Enter value of x ";
    cin >> x;
    cout << "Value of x is " << x << endl;

    // ~ Data types
    // ~ int , char , long , double , float, string are data types
    int y = 10; // ! declaration and defination of data type

    // ! If Else Statement
    // ? Write a program that takes an input of age
    // ? and prints if you are an adult or not
    // ? >= 18 , yes
    // ? < 18 , No

    int age;
    cout << "Enter your age ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult of age " << age << "\n";
    }
    else
    {
        cout << "You are not an adult!\n";
    }
    
    // ! Switch
    /* 
    * Take the day no and print the corresponding day
    * for 1  print Monday,
    * for 2 print Tuesday, and so on for 7 days
    */

    int s;
    cout << "Enter the day number ";
    cin >> s;

    switch (s)
    {
    case 1:
        cout << "Today is Monday!\n";
        break;
    case 2:
        cout << "Today is Tuesday!\n";
        break;
    case 3:
        cout << "Today is Wednesday!\n";
        break;
    case 4:
        cout << "Today is Thrusday!\n";
        break;
    case 5:
        cout << "Today is Friday!\n";
        break;
    case 6:
        cout << "Today is Saturday!\n";
        break;
    case 7:
        cout << "Today is Sunday!\n";
        break;
    default:
        cout << "Wrong Input\n";
        break;
    }
    return 0;
}