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
    CRectangle(int, int);
    void SetSize(int height, int side);

    int area() {
        return (_height * _side);
    }
};

void ExampleClassStatic() {
    CRectangle object1(0, 0);
    object1.SetSize(2, 4);
    cout << " + Area: [" << object1.area() << "].\n";
}

/**
 *  Constructor function have the same class name,
 * and cannot have any return type; not even void.
 */
CRectangle::CRectangle(int startHeight, int startSide) {
    cout << " + Constructor of CRectangle() startHeight and startSide = " << startHeight << " - " << startSide << endl;
    _height = startHeight;
    _side = startSide;
}

/**
 * Example of the default value of params. int height = 0.
 * if a value is specified this default value is ignored
 * @param height
 * @param side
 */
void CRectangle::SetSize(int height, int side) {
    _height = height;
    _side = side;
}
