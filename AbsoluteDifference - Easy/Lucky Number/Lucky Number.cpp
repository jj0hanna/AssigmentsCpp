
#include <iostream>
#include <string>
using namespace std;


bool luckeyNumber();

int main()
{
    cout << "Input a number : " << endl;
    
    if (!luckeyNumber())
    {
        cout << "Not a lucky number!";
    }
    else
    {
        cout << "A lucky number!";
    }
}
bool luckeyNumber()
{
    int number = 1234;
    cin >> number;
    string inputStr = to_string(number);


    for (int i = 0; i < inputStr.size(); i++)
    {
        for (int j = i+1; j < inputStr.size(); j++)
        {
            if (inputStr[i] == inputStr[j])
            {
                return false;
            }
        }
    }
     return true;
}   

