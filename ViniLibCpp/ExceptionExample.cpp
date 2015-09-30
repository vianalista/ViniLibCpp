//Exception
#include <iostream>
#include "ExceptionExample.h"

using namespace std;

void ExampleException(void){
    KeyWordThrow();
    cout << "---------------- \n";
    UsingLibraryException();
}

void KeyWordThrow(void){
    try{
        throw 20;
    }
    catch (int valueThrow){
        cout << " = Code received by expecption valueThrow = " << valueThrow << endl;
    }
}

//================================ overwrite the derived classes [what]===========
#include <exception>
class CDaughterExceptionClass : public exception{
    virtual const char *what() const throw(){
        return " = CDaughterExceptionClass::what() My mensage aboult the exception.";
    }
}MyWhat;
/**
 * The C++ Standard library provides a class [expection] that contain a class [what]
 * We can overwrite the derived classes [what].
 */
void UsingLibraryException(){
    try{
        throw MyWhat;
    }     // Notice "&"(ampersand), to create a object by reference.
    catch (exception &objException){
        cout << objException.what() << endl;
    }
}
