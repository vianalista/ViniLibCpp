//CheckInstances
#include <iostream>
#include "CheckInstances.h"

using namespace std;

//** IMPORTANT: Initialize a static data-member outside the class, in the global scope.
// [quantity] is a unique variable value for all the objects.
int CCheckInstances::quantity = 0;

/**
 * VerifyObjectOpen
 */
void VerifyInstances(void) {
    if (CCheckInstances::quantity)
        cout << " * Warn * Exist object no deleted." << endl;
}
