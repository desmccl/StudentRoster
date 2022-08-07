#include <iostream>
#include <string>
#include "roster.h"
#include <stdlib.h>
#include "student.h"
#include "degree.h"
using namespace std;

int main() {
	cout << "C867 - Scripting & Programming: Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 010161962" << endl;
	cout << "Name: Desiree McClain";

		cout << endl;
		cout << "Displaying all students:" << endl;

		Roster classRoster;
			classRoster.add("A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY");
			classRoster.add("A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK");
			classRoster.add("A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE");
			classRoster.add("A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY");
			classRoster.add("A5,Desiree,McClain,dmcc313@wgu.edu,28,21,30,30 ,SOFTWARE");

			classRoster.printAll();
			classRoster.printInvalidEmails();
			classRoster.printAverageDaysInCourse("A1");
			classRoster.printAverageDaysInCourse("A2");
			classRoster.printAverageDaysInCourse("A3");
			classRoster.printAverageDaysInCourse("A4");
			classRoster.printAverageDaysInCourse("A5");
			classRoster.printdegreeType(SOFTWARE);

			cout << endl;
			cout << "Removing A3:" << endl;
			classRoster.remove("A3");
			classRoster.printAll();
			cout << endl;
			cout << "Removing A3 again:" << endl;
			cout << endl;
			classRoster.remove("A3");
			cout << endl;

			cout << "Done." << endl;


}