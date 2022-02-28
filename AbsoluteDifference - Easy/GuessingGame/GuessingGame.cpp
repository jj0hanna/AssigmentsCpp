#include <iostream>
using namespace std;

void theGame();

int main()
{;
	int input;

	cout << "-- Welcome to the Guessing Game --" << endl;
	cout << "  ------------------------------  " << endl;
	cout << "What would you like to do?" << endl;
	do
	{
		cout << "[1] Start the game" << endl;
		cout << "[2] Quit" << endl;
		cin >> input;

		switch (input)
		{
		case 1: theGame(); break;
		case 2: cout << "Quit the game"; break;
		default: cout << "Not a valid input, try again." << endl; break;
		}
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	} while (input != 2);
	return 0;
}
void theGame()
{
	int theCorrectNumber = rand() % 20 + 1;
	int guesses = 1;
	int input;
	cout << "   What number between 1-20 am i thinking of?" << endl;
	cout << theCorrectNumber;
	cin >> input;

	if (input == theCorrectNumber)
	{
		guesses++;
		cout << "You found the correct number and you did it on the first try!" << endl;
	}
	else
	{
		do
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			if (input <= 0 || input > 20 || !cin.good())
			{
				cout << "That´s not a valid guess. The number can only be between 1-20, try again." << endl;
			}
			else
			{
				cout << "That is not the correct number, try again!" << endl;
			}
			cin >> input;
			guesses++;
		} while (input != theCorrectNumber);
		cout << "You found the correct number and it took you " << guesses << " tries!" << endl;
	}
	cout << "Press Enter to continue to the menu" << endl; // fix press enter
}


