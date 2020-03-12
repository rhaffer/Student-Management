/*
 * securityStudent.h
 *      Author: rhaffer
 */
#include <iostream>
#include "student.h"
#include "degree.h"

#ifndef SECURITYSTUDENT_H_
#define SECURITYSTUDENT_H_
//Rubric D3: Three classes
class SecurityStudent : public Student{ // @suppress("Class has a virtual method and non-virtual destructor")
using Student::Student;
private:
	Degree degree = SECURITY;
public:
	Degree getDegreeProgram() const;
	void print();
};



#endif /* SECURITYSTUDENT_H_ */
