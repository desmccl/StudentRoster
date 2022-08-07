#include <iostream>
#include <string>
#include "student.h"
#include <sstream>
#include <vector>
#include <stdlib.h>
#include "arraytemplate.h"
using namespace std;

Student::Student(string studentID, string firstName, string lastName,
	string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->Age = Age;
	this->daysInCourse1 = daysInCourse1;
	this->daysInCourse2 = daysInCourse2;
	this->daysInCourse3 = daysInCourse3;

	if (degreeProgram == "SECURITY") {
		this->DegreeProgramType = SECURITY;
	}
	else if (degreeProgram == "NETWORK") {
		this->DegreeProgramType = NETWORK;
	}
	else if (degreeProgram == "SOFTWARE") {
		this->DegreeProgramType = SOFTWARE;
	}
	else {
		cout << "Defaulting to Security" << endl;
		this->DegreeProgramType = SECURITY;
	}
}

	
	Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->Age = 0;
	this->daysInCourse1 = 0;
	this->daysInCourse2 = 0;
	this->daysInCourse3 = 0;
	this->DegreeProgramType = NETWORK;
}

	Student::Student(string studentRow){
		this->parse(studentRow);
	}

	void Student::parse(string studentRow) {
		List <string> parsedData;

		stringstream  s_str(studentRow);
		while (s_str.good()) {
			string substr;
			getline(s_str, substr, ',');
			parsedData.add(substr);
		}
		this->studentID = parsedData.at(0);
		this->firstName = parsedData.at(1);
		this->lastName = parsedData.at(2);
		this->emailAddress = parsedData.at(3);
		int parsedD1;
		istringstream(parsedData.at(4)) >> parsedD1;
		this->Age = parsedD1;
		int parsedD2;
		istringstream(parsedData.at(5)) >> parsedD2;
		this->daysInCourse1 = parsedD2;
		int parsedD3;
		istringstream(parsedData.at(6)) >> parsedD3;
		this->daysInCourse2 = parsedD3;
		int parsedD4;
		istringstream(parsedData.at(7)) >> parsedD4;
		this->daysInCourse3 = parsedD4;

		if (parsedData.at(8) == "SECURITY") {
			this->DegreeProgramType = SECURITY;
		}
		else if (parsedData.at(8) == "NETWORK") {
			this->DegreeProgramType = NETWORK;
		}
		else if (parsedData.at(8) == "SOFTWARE") {
			this->DegreeProgramType = SOFTWARE;
		}
		else {
			cout << "Defaulting to Security" << endl;
			this->DegreeProgramType = SECURITY;
		}



	}

	string Student::GetstudentID() {
		return  Student::studentID;
	}
	string Student::GetfirstName() {
		return Student::firstName;
	}
	string Student::GetlastName() {
		return Student::lastName;
	}
	string Student::GetemailAddress() {
		return Student::emailAddress;
	}
	int Student::GetAge() {
		return Student::Age;
	}
	int Student::GetdaysInCourse1() {
		return Student::daysInCourse1;
	}
	int Student::GetdaysInCourse2() {
		return Student::daysInCourse2;
	}
	int Student::GetdaysInCourse3() {
		return Student::daysInCourse3;
	}
	DegreeProgram Student::GetDegreeProgram() {
		return Student::DegreeProgramType;
	}

	void Student::SetstudentID(string studentID) {
		studentID = studentID;
	}
	void Student::SetfirstName(string firstName) {
		firstName = firstName;
	}
	void Student::SetlastName(string lastName) {
		lastName = lastName;
	}
	void Student::SetemailAddress(string emailAddress) {
		emailAddress = emailAddress;
	}
	void Student::SetAge(int Age) {
		Age = Age;
	}
	void Student::SetdaysInCourse1(int daysInCourse1) {
		daysInCourse1 = daysInCourse1;
	}
	void Student::SetdaysInCourse2(int daysInCourse2) {
		daysInCourse2 = daysInCourse2;
	}
	void Student::SetdaysInCourse3(int daysInCourse3) {
		daysInCourse3 = daysInCourse3;
	}

		
	

	void Student::Print() {

		
		cout << this->studentID << "\t" << "First Name: " << this->firstName << "\t" << "Last Name: " << this->lastName << "\t" << "Age: " << this->Age << "\t";
		cout << "daysInCourse: {" << this->daysInCourse1 << ", " << this->daysInCourse2 << ", " << this->daysInCourse3 << "} Degree Program: " << DegreeProgramValues[DegreeProgramType] << endl;
		
		cout << endl;


	}

	Student::~Student() {

	}
	void Student::PrintDegreeProgramType()
	{
		cout << "Degree type: " << DegreeProgramValues[DegreeProgramType] << endl;
	}

	

	
