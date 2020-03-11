/*
 * softwareStudent.h
 *      Author: rhaffer
 */
#include <iostream>
#include "degree.h"
#include "student.h"

#ifndef SOFTWARESTUDENT_H_
#define SOFTWARESTUDENT_H_

class SoftwareStudent : public Student{ // @suppress("Class has a virtual method and non-virtual destructor")
using Student::Student;
private:
	Degree degree = SOFTWARE;
public:
	Degree getDegreeProgram() const;
	void print();
};


#endif /* SOFTWARESTUDENT_H_ */
