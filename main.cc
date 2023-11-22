#include "StudentTable.h"

int main() {
	
	StudentTable* st = new StudentTable();
	int selection;

	cout << "Welcome to the Database Operator Program." << endl;
	while (1) {
		cout << "Here is the Main Menu:" << endl;
		cout << "1: Display all Student Records" << endl;
		cout << "2: Add a Student" << endl;
		cout << "3: Change a Student's Email Address" << endl;
		cout << "4: Remove a Student" << endl;
		cout << "5: Exit Program" << endl;
		cin >> selection;

		if (selection == 1) {
			// DISPLAY ALL STUDENT RECORDS
			st->getAllStudents();
		}
		else if (selection == 2) {
			// ADD A STUDENT
			string fName;
			string lName;
			string emailAddress;
			int day;
			int month;
			int year;

			cout << "\nEnter a First Name: " << endl;
			cin >> fName;
			cout << "\nEnter a Last Name: " << endl;
			cin >> lName;
			cout << "\nEnter a Email Address (it must be unique!!): " << endl;
			cin >> emailAddress;
			cout << "\nEnter the Day of Registration (aka today): " << endl;
			cin >> day;
			cout << "\nEnter the Month of Registration (aka today): " << endl;
			cin >> month;
			cout << "\nEnter the Year of Registration (aka today): " << endl;
			cin >> year;

			st->addStudent(fName, lName, emailAddress, day, month, year);

		}
		else if (selection == 3) {
			// CHANGE A STUDENT'S EMAIL ADDRESS
			int studentId;
			string emailAddress;

			cout << "\nEnter the Student Id: " << endl;
			cin >> studentId;
			cout << "\nEnter a new Email Address (it must be unique!!): " << endl;
			cin >> emailAddress;

			st->updateStudentEmail(studentId, emailAddress);

		}
		else if (selection == 4) {
			// REMOVE A STUDENT
			int studentId;

			cout << "\nEnter the Student Id to be removed: " << endl;
			cin >> studentId;
			
			st->deleteStudent(studentId);

		}
		else if (selection == 5) {
			// EXIT PROGRAM
			delete st;
			return 0;

		}
	}


	return 0;
}
