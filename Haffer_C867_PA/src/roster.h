/*
 * roster.h
 *      Author: rhaffer
 */
#include <iostream>
#include "student.h"
#include "degree.h"

#ifndef ROSTER_H_
#define ROSTER_H_

const std::string studentData[] =
 {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Rick,Haffer,rhaffer@wgu.edu,27,3,5,12,SOFTWARE"};

const int NUMCOLUMNS = 9;
const int NUMSTUDENTS = sizeof(studentData)/sizeof(studentData[0]);

class Roster{
public:
	Student* classRosterArray[NUMSTUDENTS] = {nullptr, nullptr, nullptr, nullptr, nullptr};
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age,
			int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(std::string studentID);
	void printAll();
	void printDaysInCourse(std::string studentID);
	void printInvalidEmails();
	void printByDegreeProgram();
};

#endif /* ROSTER_H_ */
