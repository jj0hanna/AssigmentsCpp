
#include <iostream>
using namespace std;

int main()
{
    float celcius = 36;
    float fahrenheit;
    
    fahrenheit = celcius * 9 / 5 + 32;

    cout << celcius << " degrees Celsius is " << fahrenheit << " degrees fahrenheit";
    system("pause > 0");
    return 0;
    
    // Answer: If i use integers insted then the answer will be 96 degrees fahrenheit. It will just remove the decimal and not give the right answer it will do "floor rounding"
}

