#include <iostream>
#include "AllocatedObjects-Quantity.h"

using namespace std;

class AllocatedObjects {
public:
    static int quantity;

    AllocatedObjects() {
        quantity++;
        ShowQuantity();
    };

    ~AllocatedObjects() {
        quantity--;
    };
    void ShowQuantity(void);
};

//** IMPORTANT: Initialize a static data-member outside the class, in the global scope.
// [quantity] is a unique variable value for all the objects.
int AllocatedObjects::quantity = 0;

void ExampleAllocatedObjectsQuantity(void) {
    AllocatedObjects obj1;
   cout << "Created 1" << endl;
    AllocatedObjects *obj2 = new AllocatedObjects;
    cout << "Created 2" << endl;
    AllocatedObjects obj345[3];
    cout << "Created 3,4,5" << endl;
    AllocatedObjects *obj6 = new AllocatedObjects;
    cout << "Created 6" << endl;

    AllocatedObjects *obj789 = new AllocatedObjects[3];
    cout << "Created 789" << endl;

    cout << "Delete 1" << endl;
    delete obj2;
    obj1.ShowQuantity();
    
    cout << "Delete +3" << endl;
    delete[] obj789;
    obj1.ShowQuantity();


    cout << " + AllocatedObjects::quantity = " << AllocatedObjects::quantity << endl;
}

void AllocatedObjects::ShowQuantity(void) {
    cout << " quantity = " << quantity << endl;
}

void ExampleAllocatedObjectsVerify(void) {

    AllocatedObjects *obj1 = new AllocatedObjects;
    cout << "Created 1" << endl;

    AllocatedObjects *obj234 = new AllocatedObjects[3];
    cout << "Created 234" << endl;

    cout << "Delete 1" << endl;
    delete obj1;
    cout << " + AllocatedObjects::quantity = " << AllocatedObjects::quantity << endl;
    
    cout << "Delete +3" << endl;
    delete[] obj234;
    cout << " + AllocatedObjects::quantity = " << AllocatedObjects::quantity << endl;

    cout << " + AllocatedObjects::quantity = " << AllocatedObjects::quantity << endl;
    
    VerifyExist();
}

int VerifyExist(void){
    if (AllocatedObjects::quantity)
        cout << " * Warn * Exist object no deleted." << endl; 
}