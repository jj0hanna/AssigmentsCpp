
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

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == lookForTheword[0])
        {
            for (int j = 1; j < lookForTheword.size(); j++)
            {
                if (input[i+j] != lookForTheword[j])
                {
                    i += j;
                    break;
                }
                else if(lookForTheword.size()-1 == j)
                {
                    return true;
                }
            }
        }
    }
    

   
  // if (strstr(input.c_str(), lookForTheword.c_str())) // am i okey to use this or does this count as a build in func?
  // {
  //     return true;
  // }
    return false;
}



