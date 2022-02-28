
#include <iostream>
#include <vector>
using namespace std;

int searchForNumber(int numbers[], int input);
vector<int> searchForAllNumbers(int numbers[], int input);

int main()
{
    int input;
    int numbers[] = { 1,5,9,5,10 };
    cout << "what number do you want to search for?" << endl;
    cin >> input;
    
    vector<int> indexes = searchForAllNumbers(numbers, input);
    for (int i : indexes)
        cout << input <<" = " << "index " << i << endl;

    int index = searchForNumber(numbers, input);
    if (cin.good())
    {
        cout << input << " = " << "index " << index;
    }
}
int searchForNumber(int numbers[], int input)
{
    if (cin.good())
    {
        for (int i = 0; i < 5; i++)
        {
            if (input == numbers[i])
            {
                return i;
            }
        }
    }
    else
    {
        cout << "That does not exist in the list, it is an unvalid input ";
    }
    return -1;
}


vector<int> searchForAllNumbers(int numbers[], int input)
{
    vector< int > indexArr;

    if (cin.good())
    {
        for (int i = 0; i < 5; i++)
        {
            if (input == *&numbers[i])
            {
                indexArr.push_back(i);
            }
        }
    }
    return indexArr;
}





//int*& searchForAllNumber(int numbers[])
//{
//    int input;
//    int size = 0;
//    
//
//    cout << "what number do you want to search for?" << endl; 
//    cin >> input;
//
//   for (int i = 0; i < 5; i++)
//   {
//       if (input == *&numbers[i])
//       {
//           size++;
//          //cout << numbers[i] <<" exists in the list and it has index " << i;
//       }
//   }
//   cout << size;
//   return numbers;
//   
   // if (cin.good())
   // {
   //     cout << input << " does not exists in the list";
   // }
   // else
   // {
   //     cout << "That does not exist in the list, it is an unvalid input";
   // }
   //return -1;
//}
 


