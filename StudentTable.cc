#include "StudentTable.h"

StudentTable::StudentTable()
{
	numOfStudents = 0;

}

StudentTable::~StudentTable()
{
	for (int i = 0; i < numOfStudents; i++) {
		delete studentArray[i];
	}
}

void StudentTable::getAllStudents()
{
	cout << "----------------------------------" << endl;
	cout << "S_Id   FName   LName  EAddr   EDate       " << endl;
	for (int i = 0; i < numOfStudents; i++) {
		cout << studentArray[i]->getStudentId() << "      " << studentArray[i]->getFirstName() << "      " 
			<< studentArray[i]->getLastName() << "      " << studentArray[i]->getEmailAddress() << "      " 
			<< studentArray[i]->getEnrollmentDate()->getYear() << "-" << 
			studentArray[i]->getEnrollmentDate()->getMonth() << "-" 
			<< studentArray[i]->getEnrollmentDate()->getDay() << endl;
	}
	cout << "----------------------------------" << endl;
}

void StudentTable::addStudent(string fName, string lName, string emailAddress, int d, int m, int y) {
	if (fName == "") {
		cout << "ERROR: Please enter a Non-Empty First Name.\n" << endl;
		return; // FAIL
	}

	if (lName == "") {
		cout << "ERROR: Please enter a Non-Empty Last Name.\n" << endl;
		return; // FAIL
	}

	if (emailAddress == "") {
		cout << "ERROR: Please enter a Non-Empty Email Address.\n" << endl;
		return; // FAIL
	}

	// TRAVERSE ARRAY TO CHECK IF EMAIL IS UNIQUE
	for (int i = 0; i < numOfStudents; i++) {
		if (studentArray[i]->getEmailAddress() == emailAddress) {
			return;
		}
	}

	numOfStudents += 1;
	Student* s = new Student(numOfStudents, fName, lName, emailAddress, d, m, y);
	studentArray[numOfStudents - 1] = s;

}

void StudentTable::updateStudentEmail(int studentId, string newEmail)
{
	if (newEmail == "") {
		cout << "ERROR: Please enter a Non-Empty Email.\n" << endl;
		return; // FAIL
	}
	
	if (studentId >> numOfStudents || studentId < 1) {
		cout << "ERROR: Please enter a valid Student ID.\n" << endl;
		return; // FAIL
	}

	// TRAVERSE ARRAY TO CHECK IF EMAIL IS UNIQUE
	for (int i = 0; i < numOfStudents; i++) {
		if (studentArray[i]->getEmailAddress() == newEmail) {
			return;
		}
	}

	studentArray[studentId - 1]->updateEmail(newEmail);
}

void StudentTable::deleteStudent(int whichStudent)
{
	if (whichStudent > numOfStudents || whichStudent < 1) {
		cout << "ERROR: Please enter a valid Student ID.\n" << endl;
		return; // FAIL
	}
	
	if (whichStudent == numOfStudents) {
		delete studentArray[numOfStudents - 1];
		numOfStudents -= 1;
		return;
	}
	
	
	for (int i = whichStudent - 1; i < numOfStudents - 1; i++) {
		Student *s = new Student(studentArray[i+1]);
		delete studentArray[i];
		studentArray[i] = s;
	}
	delete studentArray[numOfStudents - 1];
	
	numOfStudents -= 1;
	
}
