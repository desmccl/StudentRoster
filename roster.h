#pragma once
#include "student.h"
#include "arraytemplate.h"
#include <string>
#include <iostream>
#include <vector>

class Roster
{

public:

	List <Student> classRosterArray;

	void add(string studentID, string firstName, string lastName, string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeProgram);
	void add(string studentInfo);
	void parse(string studentRow);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printdegreeType(DegreeProgram degreeProgram);



};
