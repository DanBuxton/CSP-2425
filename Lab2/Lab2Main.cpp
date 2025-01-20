#include <iostream>

using namespace std;

int main()
{
	int guess, aInt = 10;

	cout << "Guess a number (1-100): ";
	cin >> guess;

	if (guess < aInt)
	{
		cout << "Too low!" << endl;
	}
	else if (guess > aInt)
	{
		cout << "Too high!" << "\n";
	}
	else
	{
		cout << "Correct!\n";
	}

	return 0;
}