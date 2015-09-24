#include <iostream>
#include "ClassesDestructor.h"

using namespace std;

class CGeometricForms {
    //[private] is the default value.
    int *_pHeight, *_pWidth;

public:
    CGeometricForms(int, int);
    ~CGeometricForms();

    int area() { return (*_pHeight * *_pWidth);}
};

CGeometricForms::CGeometricForms(int height, int width){
    _pHeight = new int;
    _pWidth = new int;
    
    *_pHeight = height;
    *_pWidth = width;
}

CGeometricForms::~CGeometricForms(){
    delete _pHeight;
    delete _pWidth;
}

void ExampleClassDynamic(void){
    CGeometricForms rectangle(1,2), square(2, 2);
    cout << " + rectangle area: " << rectangle.area() << endl;
    cout << " + square area: " << square.area() << endl << endl;
}