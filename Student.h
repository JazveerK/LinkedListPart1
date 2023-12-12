#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
public:
//take in and output ID
  void setID(int newID);
  void getID();

//take in and output names
  void setFirst(char* newFN);
  void setLast(char* newLN);
  void getName();
    
//take in and output GPA
  void setGPA(float newGPA);
  void getGPA();
    
private:
  int idNum;
  char* firstName;
  char* lastName;
  float GPA;
    
};

#endif
