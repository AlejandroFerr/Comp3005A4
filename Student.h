#pragma once

#include <string>
#include "Date.h"

using namespace std;

class Student
{
public:
	Student(int, string, string, string, int, int, int);
	~Student();
	Student(Student*);
	void updateEmail(string);

	int getStudentId();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	Date* getEnrollmentDate();

private:
	int studentID;
	string firstName;
	string lastName;
	string emailAddress;
	Date *enrollmentDate;

};
