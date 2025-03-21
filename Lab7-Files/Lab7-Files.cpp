#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Lab7-Files.h"

using namespace std;

const char* filename = "users.txt";
const char* sep = "`";
fstream f;

int main()
{
	// Output students to a file

	write_data();



	// Read students into a student list
	vector<Student> students = read_data();

	for (Student s : students)
	{
		cout << "Id:\t\t" << s.id << endl;
		cout << "Name:\t\t" << s.name << endl;
		cout << "Age:\t\t" << s.age << endl;
		cout << "Tuition:\t" << s.tuition_fee << endl << endl;
	}
}

void write_data()
{
	Student items[] = {
		{ "18018939", "Dan Buxton", 22 },
		{ "N1260853", "Daniel Buxton", 24 },
		{ "N1440332", "John Doe", 18 },
		{ "N1679266", "Sarah Davies", 34 },
	};

	f.open(filename, fstream::out); // out(2) - Override the file content / app(8) - append to the end
	for (Student s : items)
	{
		f << s.id << sep;
		f << s.name << sep;
		f << s.age << sep;
		f << s.tuition_fee << endl;
	}
	f.close();
}
vector<Student> read_data()
{
	vector<Student> students;

	f.open(filename, fstream::in); // in(1) - Read in the file content

	string line;
	while (getline(f, line))
	{
		string newContent[4];
		int i = 0;

		string item;
		stringstream ss(line);
		while (getline(ss, item, sep[0])) {
			if (!empty(item))
				newContent[i++] = item;
		}

		Student s = {
			newContent[0],
			newContent[1],
			stoi(newContent[2]),
			stod(newContent[3])
		};
		students.push_back(s);
	}

	f.close();

	return students;
}