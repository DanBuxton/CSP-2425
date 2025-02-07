#include <iostream>
using namespace std;

const int NUM_LAPTOPS = 5;

double price[NUM_LAPTOPS] = { 350.0, 750.0, 1200.0, 499.0, 999.0 };
int serial[NUM_LAPTOPS] = { 1234, 5678, 9101, 1121, 3141 };

void Part1()
{
	cout << "Serial\tPrice\tPrice with delivery\n";

	for (int i = 0; i < NUM_LAPTOPS; i++)
	{
		int delivery;
		if (price[i] < 500)
		{
			delivery = 20;
		}
		else
		{
			delivery = 10;
		}
		cout << serial[i] << "\t" << price[i] << "\t" << (price[i] + delivery) << endl;
	}
}

int main()
{
	Part1();
}