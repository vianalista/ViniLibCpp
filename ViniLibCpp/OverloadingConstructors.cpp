#include <iostream>
#include "OverloadingConstructors.h"

using namespace std;

class COverloadingConstructor{
    int number;
public:
    //If you do not declare any constructors here, the compiler assumes the class have a default constructor with no arguments.
    COverloadingConstructor();
    COverloadingConstructor(int newNumber);
    int GetNumber(void);
};

COverloadingConstructor::COverloadingConstructor(){
    number = 0;
}

COverloadingConstructor::COverloadingConstructor(int newNumber) {
    number = newNumber;
}

int COverloadingConstructor::GetNumber(void){
    return number;
}

void ExampleOverloadingConstructor(void){
    cout << " + ExampleOverloadingConstructor() \n";
    COverloadingConstructor objSimple; //Dont use () see "objSimple" and not "( )".
    cout << "   + ExampleOverloadingConstructor() objSimple.number = " << objSimple.GetNumber() << endl;
    
    COverloadingConstructor objWithValue(2); 
    cout << "   + ExampleOverloadingConstructor() objWithValue.number = " << objWithValue.GetNumber() << endl;
    cout << "   + ExampleOverloadingConstructor() objSimple.number = " << objSimple.GetNumber() << endl;
}