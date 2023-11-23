# Comp3005A4
Setup Instructions:
-------------------
There are 2 ways to setup. Firstly, try running the executable. 
If it doesn't work, then try un-tar.gz-ing the tar.gz compressed folder and running the executable from there. 
You must run the executable from a terminal, preferably a Unix/Linux one (like from a virtual machine's terminal with ./a4).

Functions Included
------------------
- StudentTable(): Constructor for Student Table Class
- ~StudentTable(): Destructor for Student Table Class
- void getAllStudents(): prints all student information in array
- void addStudent(string fName, string lName, string email, int d, int m, int y): adds a student with fName First Name, lName Last Name, email Email Address, d Day, m Month, and y Year.
- void updateStudent(int id, string newEmail): updates id Student ID's email with newEmail
- void deleteStudent(int id): deletes the Student with id Student ID
  
- Student(int id, string fName, string lName, string email, int d, int m, int y): Constructor for Student Class with id StudentId, fName First Name, lName Last Name, email Email Address, d Day, m Month, and y Year.
- ~Student(): Destructor for Student Class
- Student(Student* st): Copy Constructor accepting *st Student as a argument to initialize a new dynamically allocated deep-copy Student Object.
- void updateEmail(string newEmail): update's the student's email with newEmail

- Date(int d, int m, int y): Constructor for Date Class with d Day, m Month, y Year.
- int getDay(): Returns day private variable
- int getMonth(): Returns month private variable
- int getYear(): Returns year private variable

Video Demonstration
-------------------
https://drive.google.com/file/d/1Q4O7piL4Au9q8U93EX57zmArHKcf8a9-/view?usp=sharing


