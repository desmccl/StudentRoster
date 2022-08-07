#pragma once
#include "degree.h"
#include <string>
#include <stdlib.h>

class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int Age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	string degreeProgram;
public:
	DegreeProgram DegreeProgramType;
	Student(string studentID, string firstName, string lastName,
		string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeProgram);
	Student(string studentRow);
	Student();
	
	~Student();
	
	void SetstudentID(string studentID);
	void SetfirstName(string firstName);
	void SetlastName(string lastName);
	void SetemailAddress(string emailAddress);
	void SetAge(int Age);
	void SetdaysInCourse1(int daysInCourse1);
	void SetdaysInCourse2(int daysInCourse2);
	void SetdaysInCourse3(int daysInCourse3);

	string GetstudentID();
	string GetfirstName();
	string GetlastName();
	string GetemailAddress();
	int GetAge();
	int GetdaysInCourse1();
	int GetdaysInCourse2();
	int GetdaysInCourse3();
	virtual void Print();

	void parse(string studentRow);

	

	
	void PrintDegreeProgramType();
	void SetDegreeProgram(DegreeProgram);
	DegreeProgram GetDegreeProgram();


	

	
};