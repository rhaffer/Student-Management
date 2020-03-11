/*
 * networkStudent.h
 *      Author: rhaffer
 */
#include <iostream>
#include "student.h"
#include "degree.h"
#ifndef NETWORKSTUDENT_H_
#define NETWORKSTUDENT_H_

class NetworkStudent : public Student{ // @suppress("Class has a virtual method and non-virtual destructor")
using Student::Student;
protected:
	Degree degree = NETWORK;
public:
	Degree getDegreeProgram() const;
	void print();
};



#endif /* NETWORKSTUDENT_H_ */
