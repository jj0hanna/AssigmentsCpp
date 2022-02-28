

#include <iostream>
#include <vector>
using namespace std;

int getNumber2();
int getNumber1();
bool checkIfContainsNumber(int number1, int number2);

bool checkSingleDigit(int n);
int getNumber(bool (*func)(int));

int main()
{
    int number1;
    int number2;

    cout << "Input two integers, the first number sould be a single digit number & the seacond one can can be any number up to 2147483647" << endl;
    
    cout << "Number 1: "; number1 = getNumber1();
    cout << "Number 2: "; number2 = getNumber2();
    
    if (checkIfContainsNumber(number1, number2))
       {
           cout << number2 << " contains the number " << number1;
       }
       else
       {
           cout << number2 << " does not contain the number " << number1;
       }



   // number1 = getNumber(&checkSingleDigit); // an other way of doing it with other the functions (getNumber & checkSingleDigit)
   // cout << "Number 2: ";
   // number2 = getNumber(NULL);
   // if (checkIfContainsNumber(number1, number2))
   // {
   //     cout << number2 << " contains the number " << number1;
   // }
   // else
   // {
   //     cout << " That number does not contain " << number2;
   // }
    return 0;
    
}
int getNumber1()
{ 
    int num;
    while (1)
    {
        cin >> num;
        if (!cin.good() || num < 1 || num >= 10)
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Not valid, try again!" << endl;
        }
        else
        {
            break;
        }
    }
    return num;
}
int getNumber2()
{
    int num;
    while (1)
    {
        cin >> num;
        if (!cin.good() || num < 1 || num > INT_MAX)
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Not valid, try again!" << endl;
        }
        else
        {
            break;
        }
    }
    return num;
}
bool checkIfContainsNumber(int number1, int number2)
{
    int digit = 0;
    while (number2 > 0)
    {
        digit = number2 % 10;
        number2 /= 10;
        if (digit == number1)
        {
            return true;
        }
    }
    return false;
}








int getNumber(bool (*func)(int)) // lamda?
{
    int num;
    while (1)
    {
        cin >> num;
        if (!cin.good() || num < 1)
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Not valid, try again!" << endl;
        }
        else if(func != NULL && !func(num))
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Not valid, try again!" << endl;
        }
        else {
            break;
        }
    }
    return num;
}

bool checkSingleDigit(int n) 
{
    return n < 10;
}



