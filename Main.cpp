/*
 Name: Jazveer Kaler
 Date: 12/11/2023
 Project Description: Linked List Part 1
 */

#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {

    Node* head = NULL;
 
    //Initialize two students
    Student* studentOne = new Student();
    Student* studentTwo = new Student();
    
    //information for both students
    char fnOne[10] = "Tejas";
    char lnOne[10] = "Pandit";
    
    char fnTwo[10] = "Arjun";
    char lnTwo[10] = "Pai";
    
    studentOne -> setID(418331);
    studentOne -> setGPA(4.0);
    studentOne -> setFirst(fnOne);
    studentOne -> setLast(lnOne);
    
    studentTwo -> setID(461941);
    studentTwo -> setGPA(4.0);
    studentTwo -> setFirst(fnTwo);
    studentTwo -> setLast(lnTwo);
    
    //Using Nodes
    head = new Node(studentOne);
    head -> setNext(new Node(studentTwo));
    
    head ->getStudent()->getName();
    head ->getStudent()->getID();
    head ->getStudent()->getGPA();
    
    cout << endl;
    
    head->getNext()->getStudent()->getName();
    head->getNext()->getStudent()->getID();
    head->getNext()->getStudent()->getGPA();
    
    return 0;
}
