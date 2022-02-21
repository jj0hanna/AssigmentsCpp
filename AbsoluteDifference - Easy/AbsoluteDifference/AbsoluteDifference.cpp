
#include <iostream>
#include <stdlib.h>
using namespace std;


int absoluteDifference(int nr1, int nr2);
int absFunction(int nr);

int main()
{
    int count = 1;
    int numbers[2];
    bool isInt;
  
    cout << "-- Give two numbers -- " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Number" << count << " : ";
        cin >> numbers[i];
        while (1)
        {
            if (!cin.good())
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Not an integer try again!" << endl;
                cout << "Number" << count << " : ";
                cin >> numbers[i];
            }
            else
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                break;
            }
        }
        count++;
    }
   
    absoluteDifference(numbers[0], numbers[1]);
    
    return 0;
}
int absoluteDifference(int nr1, int nr2)
{
    int result;
    result = absFunction(nr1 - nr2);
    cout << "The absolute difference between this numbers is: " << result << endl;
    return (result);
}
int absFunction(int nr)
{
    if (nr < 0)
    {
       return -nr;
    }
    return nr;
}





