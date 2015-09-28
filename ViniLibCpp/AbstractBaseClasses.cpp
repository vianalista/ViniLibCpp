#include <iostream>
#include "AbstractBaseClasses.h"

using namespace std;

/**
 * [Abstract base classe]need contain at least one pure virtual function.
 */
class AbstractClasses{
protected:
    int _qtd;
public:
    //[Pure Virtual Function] to a [abstract type] creating a dependency that 
    // force the implementation of method in class derived.
    virtual int GetQtd(void) = 0;
    void PrintQtd(void){
        cout << " + PrintQtd = " << GetQtd() << endl;
    }
};

class Daughter1 : public AbstractClasses{
public:
    int GetQtd(void)
    {_qtd = 1; return _qtd;};
};

class Daughter2 : public AbstractClasses{
public:
    int GetQtd(void)
    {_qtd = 2; return _qtd;};
};


void ExampleAbstractClasses(void){
    Daughter1 d1;
    Daughter2 d2;
    AbstractClasses *pt1 = &d1;
    AbstractClasses *pt2 = &d2;
    
    pt1->PrintQtd();    //Will print 1.
    pt2->PrintQtd();    //Will print 2.
    
    cout << " + == Allocate memory ==  "<< endl;
    AbstractClasses *ptOne = new Daughter1;
    AbstractClasses *ptTwo = new Daughter2;
    
    ptOne->PrintQtd();
    ptTwo->PrintQtd();
    
    delete ptOne;   //Will print/call 1.
    delete ptTwo;   //Will print/call 2.
}
