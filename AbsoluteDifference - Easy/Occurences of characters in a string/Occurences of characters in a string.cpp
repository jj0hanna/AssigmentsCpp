

#include <iostream>
#include <array>
#include <string>
#include <map>

using namespace std;

int main()
{
    cout << "-- Write a line of text --" << endl;
    string input = "hallo";
    map<char, int>m;

    for (char letter: input)
    {
        auto it = m.find(letter); 
        if (it != m.end()) // if i go though the list but dont get to the end that means that i found the letter again, increase the seacond in that pair l:1++ = l:2
        {
            it->second++;
        }
        else
        {
            m.insert({ letter,1 }); 
        }
    }
    for (auto const& pair : m)
    {
        cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
    return 0;
}


