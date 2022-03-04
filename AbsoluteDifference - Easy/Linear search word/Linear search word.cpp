#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool lookForWord();

int main()
{
    cout << "Input a sentence: ";
    if (!lookForWord())
    {
        cout << "does not contains";
    }
    else
    {
        cout << "contains";
    }
    return 0;
}
bool lookForWord()
{
    string lookForTheword = "hej";
    string input;
    getline(cin, input);
    int j = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == lookForTheword[0])
        {
            for (j = 0; j < lookForTheword.size(); j++)
            {
                if (input[i + j] != lookForTheword[j])
                {
                    i += j - 1;
                    break;
                }
                else if (lookForTheword.size() - 1 == j)
                {
                    return true;
                }
            }
        }
        
    }
   
  // if (strstr(input.c_str(), lookForTheword.c_str())) // Not okey to use this i guess
  // {
  //     return true;
  // }
    return false;
}



