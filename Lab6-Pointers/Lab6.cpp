#include <iostream>
using namespace std; // instead of std::cout and std::endl

void task1();
void task2();
void task3();
void task4();
void task5();

int main()
{
	cout << ">> Task 1" << endl;
	task1();
	cout << endl << ">> Task 2" << endl;

	task2();
	cout << endl << ">> Task 3" << endl;

	task3();
	cout << endl << ">> Task 4" << endl;

	task4();
	cout << endl << ">> Task 5" << endl;

	task5();
}

void task1()
{
	int num = 10;
	int* ptr = &num;
	cout << *ptr << endl;
}

void task2()
{
	int arr[] = { 10, 20, 30, 40 };
	int* ptr = arr;

	cout << *ptr << endl; // 1st
	ptr++;
	cout << *ptr << endl; // 2nd
	ptr++;
	cout << *ptr << endl; // 3rd
	ptr -= 2;
	cout << *ptr << endl; // 1st
}

void task3()
{
	int num = 50;
	int& ref = num;
	ref = 100;
	cout << num << endl;
}

void task4()
{
	int x = 5, y = 10;
	cout << "x:" << x << "; y: " << y << endl;
	swap(x, y);
	cout << "x:" << x << "; y: " << y << endl;
}
void swap(int* a, int* b) // Task 4
{
	*a, *b = *b, *a;
}

void task5()
{
	int* ptr = new int(25);
	cout << *ptr << endl;
	delete ptr;
}