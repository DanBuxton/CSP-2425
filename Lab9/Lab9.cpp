#include <iostream>

using namespace std;

void task1();
void task2();
void task3();
void task4();

int main()
{
	task1();
}

class Animal
{
public:
	void sound()
	{
		cout << "Animal sound!" << endl;
	}
};
class Dog: public Animal
{
public:
	void sound()
	{
		cout << "Dog barks!" << endl;
	}
};
void task1()
{
	Dog g;
	g.sound();
}

class Person
{
	string ssn;
protected:
	int age;
public:
	string name;
};
class Student : public Person {};
void task2()
{
	Student s;
	s.name = "John Smith";
	//s.age = 24; // ERROR: age is protected
	//s.ssn = "N1260853"; // ERROR: ssn is private
}