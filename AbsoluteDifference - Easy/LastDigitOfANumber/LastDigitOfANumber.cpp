

#include <iostream>
#include <cstdio>
using namespace std;

int ReturnLastDigit(int input);
void PrintNumberReversed(int input);
void PrintAllNumbers(int input);

int main()
{
	int input;
	string inputString;

	cout << "-- Enter a number --" << endl;
	cin >> input;
	
	cout << "The last digit in that number is: " << ReturnLastDigit (abs(input)) << endl;
	cout << "All the digits reversed is: "; PrintNumberReversed(abs(input));
	cout << endl;
	cout << "All the digits is: "; PrintAllNumbers(abs(input));
	cout << endl;
}
int ReturnLastDigit(int input)
{
	int lastDigit;
	lastDigit = input % 10;
	return lastDigit;
}
void PrintAllNumbers(int input)
{
	int digit;

	if (input >= 10)
	{
		PrintAllNumbers(input / 10);
	}
	digit = input % 10;
	cout << digit << " ";
}
void PrintNumberReversed(int input)
{
	int digit = 0;
	while (input > 0)
	{ 
		digit = input % 10;
		input /= 10;
		cout << digit << " ";
	}
}

