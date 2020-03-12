/*
 * softwareStudent.cpp
 *      Author: rhaffer
 */
#include <iostream>
#include <string>
#include "softwareStudent.h"
using namespace std;

Degree SoftwareStudent::getDegreeProgram() const {
	return this->degree;
}
void SoftwareStudent::print(){
    string degreeString;
    
    cout << getStudentID();
    cout << "\tFirst Name: " << getFirstName();
    cout << "\tLast Name: " << getLastName();
    cout << "\tAge: " << getAge();
    int *days = getNumDaysCompleteCourse();
    cout << "\tDays In Course: " <<days[0] << "," << days[1] << "," << days[2];
    switch(getDegreeProgram()){
        case 0:
            degreeString = "SECURITY";
            break;
        case 1:
            degreeString = "NETWORK";
            break;
        case 2:
            degreeString = "SOFTWARE";
            break;
    }
    cout << "\tDegree Program: " << degreeString;
    cout << endl;
}

