#include "Student.h"
#include <cstring>
#include <cctype>

//Used for testing, largely based off of Student List
void Student::setID(int newID) {
  idNum = newID;
}
void Student::getID() {
    cout << "ID: " << idNum << endl;
}


void Student::setFirst(char* newFN) {
  firstName = new char[100];
  strcpy(firstName, newFN);
}
void Student::setLast(char* newLN) {
  lastName = new char[100];
  strcpy(lastName, newLN);
}
void Student::getName() {
    cout << "Name: " << lastName << ", " << firstName << endl;
}

void Student::setGPA(float newGPA) {
  GPA = newGPA;
}
void Student::getGPA() {
    cout << "GPA: " << GPA << ".0" << endl;
}

