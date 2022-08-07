#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "student.h"
#include "roster.h"
#include "degree.h"
#include <regex>
using namespace std;



void Roster::parse(string studentRow)
{
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeProgram) {
	classRosterArray.add(Student(studentID, firstName, lastName, emailAddress, Age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram));
}

void Roster::add(string studentInfo) {
	classRosterArray.add(Student(studentInfo));
}

void Roster::remove(string studentID) {
	bool found = false;
	for (int i = 0; i < classRosterArray.size(); i++)
	{
		string sID = classRosterArray.at(i).GetstudentID();
		if (sID == studentID) {
			found = true;
			classRosterArray.remove(i);
		}
	}

	if (found == false) {
		cout << "The student with the ID: " << studentID << " was not found." << endl;
	}
}

void Roster::printAll() {
	for (int i = 0; i < classRosterArray.size(); i++) {
		classRosterArray.at(i).Print();
	}
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < classRosterArray.size(); i++) {
		string sID = classRosterArray.at(i).GetstudentID();
		if (sID == studentID)
		{
			int days1 = classRosterArray.at(i).GetdaysInCourse1();
			int days2 = classRosterArray.at(i).GetdaysInCourse2();
			int days3 = classRosterArray.at(i).GetdaysInCourse3();

			float avDays = ((float)days1 + (float)days2 + (float)days3) / 3.0;
			cout << "Student ID: " << studentID << fixed << setprecision(0) << " average days in course is: " << avDays << endl;

		}
	}

	cout << endl;
}

void Roster::printInvalidEmails() {
	const regex email_regex("^[^@\\s]+@[^@\\s\\.]+\\.[^@\\.\\s]+$");
	cout << endl;
	cout << "Displaying invalid emails:" << endl;
	cout << endl;

	for (int i = 0; i < classRosterArray.size(); i++) {
		string sEmail = classRosterArray.at(i).GetemailAddress();
		bool match = regex_match(sEmail, email_regex);
		if (!match) {

			cout << sEmail << " - is invalid. " << endl;
		}
	}

	cout << endl;
}

void Roster::printdegreeType(DegreeProgram degreeProgram) {
	cout << endl;
	for (int i = 0; i < classRosterArray.size(); ++i) {
		if (classRosterArray.at(i).GetDegreeProgram() == degreeProgram) {
			cout << "Showing student in degree program: " << DegreeProgramValues[degreeProgram] << endl;
			classRosterArray.at(i).Print();
		}
	}
}

