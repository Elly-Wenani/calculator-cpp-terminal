#include <iostream>
#include <cmath>
#include <cstdlib>

/*This code is written by Elly Wenani. It is a code for a calculator and a multiplication table.
The user is asked to choose either C the calculator or M for a multiplication table.
The multiplication table prints the numbers between 1 and 15. while the calculator calculates numbers
between 1000 for first number and 999 for second number*/


using namespace std;

bool calculatorMenu()
{
    //Variables
    int number, range;
    char choice;
    int firstNumber, secondNumber;
    char opChoice, last;
    int sum;

    calcMenu:
    cout << endl << "Ufanisi Primary School"<<endl <<endl << endl;
    cout << "Do you want to create a Multiplication Table (M) or perform a Calculation (C)? Enter M or C only:" <<endl;
    cin >> choice;


    //This code is for calculator
    if (choice == 'C')
    {
        numberOne:
    // number selection
    cout << endl << endl << "Please enter your first number (0 - 1000): " << endl;
    cin >> firstNumber ;

    if (firstNumber < 0 || firstNumber > 1000)
    {
    cout << "Number should be between 0 - 1000!"<< endl << endl << endl;

    goto numberOne;
    }

    numberTwo:
    cout << endl << "Please enter your second number (0 - 999):" << endl;
    cin >> secondNumber;

    if (secondNumber < 0 || secondNumber > 999)
    {
    cout << "Number should be between 0 - 999!"<< endl << endl << endl;
    goto numberTwo;
    }


    cout << endl << "Please make your operator selection (+, -, *, / or %):" << endl;
    cin >> opChoice;


    // Conditions to do the calculation
    if (opChoice == '+') {
        sum = firstNumber + secondNumber;
    }
    if (opChoice == '-') {
        sum = firstNumber - secondNumber;
    }
    if (opChoice == '*') {
        sum = firstNumber * secondNumber;
    }
    if (opChoice == '/') {
        sum = firstNumber / secondNumber;
    }

    if (opChoice == '%') {
        sum = firstNumber % secondNumber;
    }




    //output
    cout << endl << firstNumber << " " << opChoice << " " << secondNumber << " = " << sum << endl << endl;

    cout << "Type (E) to exit or any other key to continue" << endl;
    cin >> last;
    cout << " " << endl << endl << endl;
    if(last == 'E')
        {
            return 0;
        }
    else
        {
            goto calcMenu;
        }

    }

    //This code executes the multiplication table for a chosen number with the specified range.
    else if (choice == 'M')
    {
        mreturnA:
    cout << endl << endl << "Please enter the Multiplication Table number. Note: The number must be between 1 and 20 only:" << endl;
    cin >> number;
    if (number < 1 || number > 20)
    {
    cout << "Number not between 1 and 20. Press any key to continue:"<< endl << endl << endl;
    goto mreturnA;
    }

    mreturnB:
    cout << endl << "Please enter the number of lines to be displayed Note: The number must be between 1 and 15 only: " << endl;
    cin >> range;
    if (range < 1 || range > 15)
    {
    cout << "Number not between 1 and 15. Press any key to continue:"<< endl << endl << endl;
    goto mreturnB;
    }

    cout << endl << endl << endl << "The multiplication table for " << number <<endl;

    for(int i=1; i <= range; ++i)
    {
         cout <<number<< "*"<< i<< "="<< i*number<<endl;
    }

    cout << endl << "Type (E) to exit or any other key to continue" << endl;
    cin >> last;
    cout << " "<< endl << endl << endl << endl;
    if(last == 'E')
        {
            return 0;
        }
    else
        {
            goto calcMenu;
        }

    }

    else
    {
        cout <<endl << "Sorry, you made a wrong choice. Choose either M or C (uppercase characters) only"<< endl <<endl <<endl <<endl;
    }


    return true;
}
int main(){

    while (calculatorMenu()){}

    return 0;
}
