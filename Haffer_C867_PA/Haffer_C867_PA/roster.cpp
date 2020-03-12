/*
 * roster.cpp
 *      Author: rhaffer
 */
#include <iostream>
#include <sstream>
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
using namespace std;

int main(){
    //Rubric F1:Screen Output ; F4: Psuedo Code Conversion
	cout << "SCRIPTING AND PROGRAMMING -- APPLICATIONS (C867)" << endl;
	cout << "Written in C++ by Rick Haffer, ID: 001375723" << endl;
	cout << endl;
    //Rubric F2: Roster class created
	Roster classRoster;
    Degree degree;
    //Rubric E1: One Array
    string output, col[NUMCOLUMNS];
    for (int x = 0; x < NUMSTUDENTS; x++){
        istringstream input(studentData[x]);
        for (int y = 0; y < NUMCOLUMNS; y++){
            getline(input, output, ',');
            col[y] = output;
        }
        if (col[8] == "SECURITY"){
            degree = SECURITY;
        }
        else if (col[8] == "NETWORK"){
            degree = NETWORK;
        }
        else{
            degree = SOFTWARE;
        }
        //Rubric E2: Student Object ; E2B: Adding Student Objects to Array; F3: Add Students
        classRoster.add(col[0], col[1], col[2], col[3], stoi(col[4]), stoi(col[5]), stoi(col[6]), stoi(col[7]), degree);
    }
    
    cout << "List of Student Data: " << endl;
    classRoster.printAll();
    cout << endl;
    
    cout << "Demo of Student Averages: " << endl;
    for (int x = 0; x<NUMSTUDENTS; x++){
        classRoster.printDaysInCourse(classRoster.classRosterArray[x]->getStudentID());
    }
    cout << endl;
    
    cout << "Demo of Invalid Emails: " << endl;
    classRoster.printInvalidEmails();
    cout << endl;
    
    cout << "Demo of Degree Plans: " << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;
    
    cout << "Demo of Student Removal:" << endl;
    classRoster.remove("A3");
    classRoster.remove("A3");
    cout << endl;
    //Rubric F5:Deconstructor Call
    classRoster.~Roster();
}
//Rubric E2: Student Object ; Rubric E3A: Add Function
void Roster::add(string StudentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree){
    //E2A: Applying Pointer Operations
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
}
//Rubric E3B: Remove Function
void Roster::remove(string StudentID){
    cout << "Removing Student with ID: " << StudentID << endl;
    for (int x = 0; x < NUMSTUDENTS; x++){
        if (classRosterArray[x] == nullptr){
            cout << "Error: Student Not Found." << endl;
            break;
        }
        else if (StudentID == classRosterArray[x]->getStudentID()){
            classRosterArray[x] = nullptr;
            cout << "Student Removed" << endl;
        }
    }
}
//Rubric E3C: PrintAll Function
void Roster::printAll(){
    for (int x = 0; x < NUMSTUDENTS; x++){
        if (classRosterArray[x] != nullptr){
        classRosterArray[x]->print();
        }
    }
}
//Rubric E3D: PrintAverage Function
void Roster::printDaysInCourse(string studentID){
    for (int x = 0; x < NUMSTUDENTS; x++){
        if (studentID == classRosterArray[x]->getStudentID()){
            int *totalDays = classRosterArray[x]->getNumDaysCompleteCourse();
            cout << "Student ID: \t" << studentID << "\t";
            cout << "AVG: " << float((totalDays[0] + totalDays[1] + totalDays[2])/3);
            cout << endl;
        }
    }
}
//Rubric E3E: PrintInvalidEmail Function
void Roster::printInvalidEmails(){
    for (int x = 0; x < NUMSTUDENTS; x++){
        string email = classRosterArray[x]->getEmailAddress();
        if((email.find('@') == string::npos) || (email.find('.') == string::npos) || (email.find(' ') != string::npos)){
            cout << email << endl;
        }
    }
}
//Rubric E3F: PrintByDegreeProgram Function
void Roster::printByDegreeProgram(Degree degree){
    for (int x = 0; x < NUMSTUDENTS; x++){
        if(classRosterArray[x] == nullptr){
            continue;
        }
        if (degree == classRosterArray[x]->getDegreeProgram()){
            classRosterArray[x]->print();
        }
    }
}

Roster::~Roster(){
    
}
