#include <iostream>

using namespace std;

// **** Task 1 ****
//int main()
//{
//	int guess, aInt = 10;
//
//	cout << "Guess a number (1-100): ";
//	cin >> guess;
//
//	if (guess < aInt)
//	{
//		cout << "Too low!" << endl;
//	}
//	else if (guess > aInt)
//	{
//		cout << "Too high!" << "\n";
//	}
//	else
//	{
//		cout << "Correct!\n";
//	}
//
//	return 0;
//}

// **** Task 3 ****
int main()
{
	int a = 2,
		b = 4,
		c = 6,
		d = 8;

	if (a == 2 && b < 3)
	{
		cout << "Test A" << endl;
	}
	else
	{
		cout << "Test A failed" << endl;
	}

	if (a != 3 && b > 2)
	{
		cout << "Test B" << endl;
	}
	else
	{
		cout << "Test B failed" << endl;
	}

	if (c < 7 || d > 9)
	{
		cout << "Test C" << endl;
	}
	else
	{
		cout << "Test C failed" << endl;
	}

	if (c >= 6 || d <= 10)
	{
		cout << "Test D" << endl;
	}
	else
	{
		cout << "Test D failed" << endl;
	}

	return 0;
}