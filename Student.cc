#include "Student.h"

Student::Student(int id, string fname, string lname, string email, int day, int month, int year)
{
	studentID = id;
	firstName = fname;
	lastName = lname;
	emailAddress = email;
	enrollmentDate = new Date(day, month, year);
}

Student::~Student() 
{
	delete enrollmentDate;
}

Student::Student(Student* s)
{
	studentID = s->getStudentId() - 1;
	firstName = s->getFirstName();
	lastName = s->getLastName();
	emailAddress = s->getEmailAddress();
	enrollmentDate = new Date(s->getEnrollmentDate()->getDay(), s->getEnrollmentDate()->getMonth(), s->getEnrollmentDate()->getYear());
}

void Student::updateEmail(string newEmail) {
	emailAddress = newEmail;
}

int Student::getStudentId() {
	return studentID;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmailAddress() {
	return emailAddress;
}

Date* Student::getEnrollmentDate() {
	return enrollmentDate;
}
