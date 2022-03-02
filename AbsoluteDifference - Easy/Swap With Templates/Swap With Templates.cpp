#include <iostream>
using namespace std;

template<typename T>
void swapWithTemplates(T& number1, T& number2);


int main()
{
    int number1, number2;

    cout << "-- Enter two different numbers --" << endl;
    cout << "Number 1: "; cin >> number1;
    cout << "Number 2: "; cin >> number2;

    swapWithTemplates(number1, number2);

    cout << " --Swap numbers-- " << endl;
    cout << "Number 1 =" << " " << number1 << " " << endl;
    cout << "Number 2 =" << " " << number2 << " " << endl;
}

template<typename T>
void swapWithTemplates(T& number1, T& number2)
{
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
}





