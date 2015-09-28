#include <iostream>
#include "VirtualMember.h"

using namespace std;

class CAnimal {
protected:
    int _birth;
public:

    void SetBirth(int b) {
        _birth = b;
    }

    //** Virtual Member
    virtual int GetBirth() {
        return (0);
    }
};

class CRabbit : public CAnimal {
public:

    int GetBirth() {
        return _birth;
    }
};

class CCow : public CAnimal {
public:

    int GetBirth() {
        return _birth;
    }
};

/**
 * Retunr:
 * 1
 * 2
 * 0
 */
void ExampleVirtualMember(void) {
    CAnimal animal;
    CRabbit rabbit;
    CCow cow;

    CAnimal *pointer = &rabbit; //Polymorphism
    pointer->SetBirth(1);
    cout << pointer->GetBirth() << endl;

    pointer = &cow; //Polymorphism
    pointer->SetBirth(2);
    cout << pointer->GetBirth() << endl;
    
    pointer = &animal; //Polymorphism
    pointer->SetBirth(3);
    cout << pointer->GetBirth() << endl;
}
