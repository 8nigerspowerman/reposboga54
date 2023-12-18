#include "Student.h"
#include<iostream>

using namespace std;

Student::Student() {
	delete this->name;
	delete this->group;
	cout << "Delete" << endl;
}

Student::Student(string name, int group) {
	this->name = new string();
	this->group = new int();
	*(this->name) = name;
	*(this->group) = group;
}

Student::Student(const Student& stud) {
	*(this->name) = *(stud.name);
	*(this->group) = *(stud.group);
}

Student::Student(Student&& stud) {
	this->name = stud.name;
	this->group = stud.group;
	stud.name = nullptr;
	stud.group = nullptr;
	cout << "Transfer: " << this << endl;
}

void Student::show() {
	cout << "I'm" << *(this->name) << ". Group " << *(this->group) << endl;
}