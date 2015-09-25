//FriendClasses
#include <iostream>
#include "FriendClasses.h"
#include "CheckInstances.h"

using namespace std;

class CMyClass {
public:
    CMyClass();
    ~CMyClass();
    
    //[Friend Class]: first class access to the protected and private members of the second.
    friend class CCheckInstances;
    friend void VerifyInstances(void);
};

CMyClass::CMyClass()  {
    cout << " + CMyClass() creadted." << endl;
    CCheckInstances *instance = new CCheckInstances;    //** Make control of created instances.
};

CMyClass::~CMyClass(){
    cout << " + CMyClass() destroy." << endl;
    
}
void ExampleFriendClasses(void) {
    CMyClass *obj = new CMyClass;

    VerifyInstances();                                   //** Make control of created instances.
}

