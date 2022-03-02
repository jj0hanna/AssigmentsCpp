

#include <iostream>
#include <array>
#include <string>
#include <map>

using namespace std;

//void occurencesOfCharacters();
//void printarray(char arg[], int length);
//
int main()
{
    cout << "-- Write a line of text --" << endl;
    string input = "hallo";
    int count = 0;
    map<char, int>m;

    // for (int i = 0; i < input.size(); i++) // hello
    // {
    //     m.insert({ input[i], count++ });
    // }
    // 

    for (int i = 0; i < input.size(); i++) //hello
    {
        m.insert({ input[i], count });
        for (int j = i + 1; j < input.size(); j++)
        {
          
           // if (input[i] == input[j])
           // {
           //    m.at(input[i]) = count++;
           // }
        }
    }
    for (auto const& pair : m) 
    {
        cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
    return 0;
}




//void occurencesOfCharacters()
//{
//    
//    string strInput;
//    cin >> strInput;
//    int count = 0;
//    
//    
//    
//    cout << count;
//}
//void printarray(char arg[], int length) 
//{
//    for (int n = 0; n < length; ++n)
//        cout << arg[n] << ' ';
//    cout << '\n';
//}

