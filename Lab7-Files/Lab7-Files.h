#pragma once

#include <string>
#include <vector>

struct Student
{
	std::string id;
	std::string name;
	int age;
	double tuition_fee = 9250;
};

void write_data();
std::vector<Student> read_data();