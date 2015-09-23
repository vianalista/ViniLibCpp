#include <iostream>
#include "Classes.h"

using namespace std;

//[private] accessible only from within other members of the same class or from
//their friends.
//[protected] accessible from members of their same class and from their friends, but also
//from members of their derived classes.
//[public] is full access.

class CRectangle {
    //[private] is the default value.
    int _height, _side;
    
public:
    void SetSize(int, int);
    int area() {return (_height * _side);}
};

void ExampleClassStatic(){
    CRectangle object1;
    object1.SetSize(2, 4);
    cout << " + Area: [" << object1.area() << "].\n";
}

void CRectangle::SetSize(int height, int side){
    _height = height;
    _side = side;
}
