/*
 * student.cpp
 *      Author: rhaffer
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

//Constructors
Student::Student(){
    studentID = "";
    firstName = "";
    lastName = "";
    emailAddress = "";
    age = 0;
    numDaysCompleteCourse = new int [NUMDAYS];
    for (int x = 0; x < NUMDAYS; x++){
        numDaysCompleteCourse[x] = 0;
    }
}

Student::Student(string sID, string fName, string lName, string email, int newAge, int dayInCourse1, int dayInCourse2, int dayInCourse3, Degree newDegree){
    studentID = sID;
    firstName = fName;
    lastName = lName;
    emailAddress = email;
    age = newAge;
    numDaysCompleteCourse = new int [NUMDAYS]{dayInCourse1, dayInCourse2, dayInCourse3};
    degree = newDegree;
}

//Setters
void Student::setStudentID(string sID){
    this->studentID = sID;
}

void Student::setFirstName(string fName){
    this->firstName = fName;
}

void Student::setLastName(string lName){
    this->lastName = lName;
}

void Student::setEmailAddress(string email){
    this->emailAddress = email;
}

void Student::setAge(int age){
    this->age = age;
}

void Student::setNumDaysCompleteCourse(int daysInCourse[]){
    this->numDaysCompleteCourse = new int [NUMDAYS];
    for (int x = 0; x < NUMDAYS; x++){
        numDaysCompleteCourse[x] = daysInCourse[x];
    }
}

void Student::setDegree(Degree degree){
    this->degree = degree;
}

//Getters
string Student::getStudentID() const{
    return studentID;
}

string Student::getFirstName() const{
    return firstName;
}

string Student::getLastName() const{
    return lastName;
}

string Student::getEmailAddress() const{
    return emailAddress;
}

int Student::getAge() const{
    return age;
}

int *Student::getNumDaysCompleteCourse() const{
    return numDaysCompleteCourse;
}
