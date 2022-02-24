
#include <iostream>
using namespace std;

//void swap(int number1, int number2);
void swapWithPointers(int number1, int number2);
void swapWithSTL(int number1, int number2);
void swapWithReference(int& number1, int& number2);

int main()
{
    int number1, number2;
   
    
    cout << "-- Enter two different numbers --"<< endl;
    cout << "Number 1: "; cin >> number1;
    cout << "Number 2: "; cin >> number2;
    
    swapWithPointers(number1, number2);
    swapWithSTL(number1,number2);
    swapWithReference(number1, number2);
    
    return 0;
}
 void swapWithReference(int& number1, int& number2) // reference done in the right way?
 {
     number1 = number1 + number2;
     number2 = number1 - number2; 
     number1 = number1 - number2;
 
     cout << " --Swap numbers-- " << endl;
     cout << "Number 1 =" << " " << number1 << " " << endl;
     cout << "Number 2 =" << " " << number2 << " " << endl;
 }
void swapWithPointers(int number1, int number2) //Pointers done in the right way?
{
    int temp;
    //int* tempPtr = &temp;

    *&temp = *&number1; //get adress from nr1& 
    *&number1 = *&number2;
    *&number2 = *&temp;

    cout << " --Swap numbers-- " << endl;
    cout << "Number 1 =" << " " << *&number1 << " " << endl;
    cout << "Number 2 =" << " " << *&number2 << " " << endl;
}
void swapWithSTL(int number1, int number2) //STL?
{
    cout << " --Swap numbers-- " << endl;
    swap(number1, number2);
    cout << "Number 1 =" << " " << number1 << " " << endl;
    cout << "Number 2 =" << " " << number2 << " " << endl;
}




