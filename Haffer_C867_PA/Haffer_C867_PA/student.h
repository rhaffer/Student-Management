/*
 * student.h
 *      Author: rhaffer
 */
#include <iostream>
#include <string>
#include "degree.h"

#ifndef STUDENT_H_
#define STUDENT_H_

class Student{ // Rubric D1: Base Class Student
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
	//Constructors -- Rubric D2C: Constructors
	Student();
	Student(std::string sID, std::string fName, std::string lName, std::string email, int newAge, int dayInCourse1, int dayInCourse2, int dayInCourse3, Degree newDegree);
	//Setters -- Rubric D2B: Mutators
	void setStudentID(std::string sID);
	void setFirstName(std::string fName);
	void setLastName(std:: string lName);
	void setEmailAddress(std:: string email);
	void setAge(int age);
	void setNumDaysCompleteCourse(int daysInCourse[]);
	void setDegree(Degree degree);
	//Getters -- Rubric D2A: Accessor
	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmailAddress() const;
	int getAge() const;
	int *getNumDaysCompleteCourse() const;
	virtual Degree getDegreeProgram() const = 0; //Rubric D2F: Virtual GetDegreeProgram
	virtual void print() = 0; //Rubric D2D: Printing Specific Data
	//Destructor -- D2E: Destructor
	~Student();
};


#endif /* STUDENT_H_ */
