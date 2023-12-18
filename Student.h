#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string* name;
	int* group;
public:
	Student();
	Student(string name, int group);
	Student(const Student& stud);
	Student(Student&& stud);

	void show();
};

