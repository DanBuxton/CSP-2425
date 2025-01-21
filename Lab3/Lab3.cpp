#include <iostream>
using namespace std;

void Task1A()
{
	int pollution_level[6];
	int total = 0;

	for (int counter = 0; counter < 6; counter++)
	{
		cout << "Enter pollution level for day " << counter << " range (1-100): ";
		cin >> pollution_level[counter];
		total = total + pollution_level[counter];
	}
	cout << endl;
	cout << "The average pollution level over those 6 days was: " << total / 6.0 << endl;
}
void Task1B()
{
	const int NUM_DAYS = 10;
	int pollution_level[NUM_DAYS];
	int total = 0;

	for (int counter = 0; counter < NUM_DAYS; counter++)
	{
		cout << "Enter pollution level for day " << counter << " range (1-100): ";
		cin >> pollution_level[counter];
		while (pollution_level[counter] < 1 || pollution_level[counter] > 100)
		{
			cout << "Try again" << endl;
			cout << "Enter pollution level for day " << counter << " range (1-100): ";
			cin >> pollution_level[counter];
		}
		total = total + pollution_level[counter];
	}
	cout << endl;
	cout << "The average pollution level over those 6 days was: " << total / (NUM_DAYS*1.0) << endl;
}

int main()
{
	cout << "Task 1 (A)\n\n";
	Task1A();

	cout << "\n\nTask 1 (B)\n\n";
	Task1B();

	return 0;
}