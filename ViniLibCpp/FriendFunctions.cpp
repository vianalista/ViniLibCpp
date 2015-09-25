
#include <iostream>
#include "FriendFunctions.h"

using namespace std;

class CFriendFunction {
public:
    static int quantity;

    CFriendFunction()  {quantity++;};
    ~CFriendFunction() {quantity--;};
    friend void VerifyObjectOpen(void);
};

//** IMPORTANT: Initialize a static data-member outside the class, in the global scope.
// [quantity] is a unique variable value for all the objects.
int CFriendFunction::quantity = 0;

void VerifyObjectOpen(void) {
    if (CFriendFunction::quantity)
        cout << " * Warn * Exist object no deleted." << endl;
}

void ExampleFriendFunction(void) {
    CFriendFunction *obj = new CFriendFunction;

    // See diferent result when coment the above line
    delete obj;

    VerifyObjectOpen();
}
