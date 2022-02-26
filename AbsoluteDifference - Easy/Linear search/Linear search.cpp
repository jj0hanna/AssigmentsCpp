
#include <iostream>
#include <vector>
using namespace std;

int searchForNumber(int numbers[]);

int main()
{
    int numbers[] = { 1,5,9,5,10 };
    
    searchForNumber(numbers);
    
}
int searchForNumber(int numbers[])
{
    int input;

    cout << "what number do you want to search for?" << endl;
    cin >> input;

    for (int i = 0; i < 5; i++)
    {
        if (input == numbers[i])
        {
            cout << numbers[i] << " exists in the list and it has index " << i;
            return i;
        }
    }
   
    if (cin.good())
    {
        cout << input << " does not exists in the list";
    }
    else
    {
        cout << "That does not exist in the list, it is an unvalid input";
    }
   return -1;
    
}



//int*& searchForNumber(int numbers[])
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
 
 
 
 
 
 
//vector<int> searchForNumber(int numbers[])
//{
//    int input;
//    int size = 0;
//    vector< int > indexArr;
//
//    cout << "what number do you want to search for?" << endl;
//    cin >> input;
//
//    for (int i = 0; i < 5; i++)
//    {
//        if (input == *&numbers[i])
//        {
//            indexArr.push_back(i);
//            cout << indexArr.begin();
//            // cout << numbers[i] <<" exists in the list and it has index " << i;
//            // return i;
//        }
//    }
//
//    return indexArr;
//    //  if (cin.good())
//    //  {
//    //      cout << input << " does not exists in the list";
//    //  }
//    //  else
//    //  {
//    //      cout << "That does not exist in the list, it is an unvalid input";
//    //  }
//
//}
//
