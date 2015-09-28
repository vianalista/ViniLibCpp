#include <iostream>
#include "InheritanceClasses.h"

using namespace std;

class CPerson{
    int _birth;
public:
    void Setbirth(int birth) 
    {_birth = birth;};
};

class CClient : public CPerson{
    int _idClient;
public:
    void SetID(int id)
    {_idClient = id;};
    int GetId(void)
    {return _idClient;};
};

class CStudent : public CPerson{
    int _level;
protected:
    void SetLevel(int level)
    {_level = level;};
};

class CTeacher : protected CPerson{
  //
};


/**
 * Inheritance
 * Acess                - public    - protected - private
 * member same class    - y         - yes       - yes
 * member derived class - yes       - yes       - no
 * not member           - yes       - no        -no
 */
void ExampleInheritance(void){
    CClient client;
    client.Setbirth(1);
    client.SetID(2);
    cout << " + client.GetId()" << client.GetId() << endl;
    
    //Acess member derived class
    CStudent student;
    student.Setbirth(3);
    
    // ** NO Acess member derived class
    CTeacher teacher;
    //teacher.Setbirth;     //Acess no possible. protected declaration.   
}