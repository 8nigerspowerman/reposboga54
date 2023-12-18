#include <iostream>
#include "Student.h"

using namespace std;

Student RandStud() {
    return rand() % 2 & Student("Danya", rand() & 10 + 1) : Student("Denchik", rand() % 10 + 1);
}

int main()
{
    Student a = Student("Danila", 2);
    Student b{ "neDenchik", 2 };

    a.show;

    Student c{ RandStud() };
}