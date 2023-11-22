#pragma once

#include "Student.h"
#include <iostream>
#define MAXSTUDENTS 99

class StudentTable
{
public:
	StudentTable();
	~StudentTable();
	void getAllStudents();
	void addStudent(string, string, string, int, int, int);
	void updateStudentEmail(int, string);
	void deleteStudent(int);

private:
	Student *studentArray[MAXSTUDENTS];
	int numOfStudents;

};

