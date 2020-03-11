/*
 * student.h
 *      Author: rhaffer
 */
#include <iostream>
#include <string>
#include "degree.h"

#ifndef STUDENT_H_
#define STUDENT_H_

class Student{
	const int NUMDAYS = 3;
protected:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int *numDaysCompleteCourse;
	Degree degree;
public:
	//Constructors
	Student();
	Student(std::string sID, std::string fName, std::string lName, std::string email, int newAge, int dayInCourse1, int dayInCourse2, int dayInCourse3, Degree newDegree);
	//Setters
	void setStudentID(std::string sID);
	void setFirstName(std::string fName);
	void setLastName(std:: string lName);
	void setEmailAddress(std:: string email);
	void setAge(int age);
	void setNumDaysCompleteCourse(int daysInCourse[]);
	void setDegree(Degree degree);
	//Getters
	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmailAddress() const;
	int getAge() const;
	int *getNumDaysCompleteCourse() const;
	Degree getDegreeProgram();
	void print();
	//Destructor
	~Student(); // @suppress("Class has a virtual method and non-virtual destructor")
};


#endif /* STUDENT_H_ */
