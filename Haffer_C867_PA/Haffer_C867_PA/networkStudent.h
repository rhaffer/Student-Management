/*
 * networkStudent.h
 *      Author: rhaffer
 */
#include <iostream>
#include "student.h"
#include "degree.h"
#ifndef NETWORKSTUDENT_H_
#define NETWORKSTUDENT_H_
//Rubric D3: Three Classes
class NetworkStudent : public Student{ 
using Student::Student;
protected:
	Degree degree = NETWORK;
public:
	Degree getDegreeProgram() const;
	void print();
};



#endif /* NETWORKSTUDENT_H_ */
