/*
 * roster.cpp
 *      Author: rhaffer
 */
#include <iostream>
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
using namespace std;

int main(){
	cout << "SCRIPTING AND PROGRAMMING -- APPLICATIONS (C867)" << endl;
	cout << "Written in C++ by Rick Haffer, ID: 001375723" << endl;
	cout << endl;

	Roster classRoster;
}

void Roster::add(string StudentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree){
	Student *student = nullptr;
	switch(degree){
	case NETWORK:
		student = new NetworkStudent(StudentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
		break;
	case SECURITY:
		student = new SecurityStudent(StudentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
		break;
	case SOFTWARE:
		student = new SoftwareStudent(StudentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
		break;
	}

	for(int i = 0; i < NUMSTUDENTS; i++){
		if (classRosterArray[i] == nullptr){
			classRosterArray[i] = student;
			break;
		}
	}
};
