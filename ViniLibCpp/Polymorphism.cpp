#include <iostream>
#include "Polymorphism.h"

using namespace std;

class CPerson{
public:
    int _birth;
    CPerson(){cout << " + CPerson" << endl;}
    void SetBirth(int b) {_birth = b;}
};

class CClient : public CPerson{
public:
    CClient(){cout << "   + CClient" << endl;}
    void GetClient(void) {cout << "    + CClient _birth: " << _birth << endl;}
};

class CStudent : public CPerson{
public:
    CStudent(){cout << "   + CStudent" << endl;}
    void GetStudent(void) {cout << "    + CStudent _birth: " << _birth << endl;}
};

void ExamplePolymorphism(void){
    CClient client;
    CStudent student;
    
    CPerson *pPerson = &client;     //Polymorphism
    pPerson->SetBirth(1);
    
    pPerson = &student;            //Polymorphism
    pPerson->SetBirth(2);
    
    client.GetClient();
    student.GetStudent();
}