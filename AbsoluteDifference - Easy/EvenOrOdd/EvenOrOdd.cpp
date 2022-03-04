#include <iostream>
using namespace std;

void EvenOrOdd(int input);
bool IsEvenNr(int input);

int main()
{
	int input;
	cout << "-- Give a number --" << endl;
	cin >> input;
	
	if (IsEvenNr(input))
	{
		cout << "You entered an even number!";
	}
	else if (!IsEvenNr(input))
	{
		cout << "You entered an odd number";
	}
	return 0;
	
}
void EvenOrOdd(int input)
{
	int number = input % 2;
	if (number < 1)
	{
		cout << "Even number";
	}
	else
	{
		cout << "Odd number";
	}
}
bool IsEvenNr(int input)
{
	int number = input % 2;
	if (number < 1)
	{
		return true;
	}
	return false;
}
