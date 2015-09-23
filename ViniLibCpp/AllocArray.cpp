#include <iostream>
#include "AllocArray.h"

using namespace std;

void ExampleAllocArray(void) {

    int * p;
    
    /*The other method is known as nothrow, and what happens when it is used is that when a memory allocation fails,
    instead of throwing a bad_alloc exception or terminating the program, the pointer returned by new is a null
    pointer, and the program continues its execution. */
    p = new (nothrow) int[3];
    
    if (p == 0)
        cout << "Error: memory could not be allocated";
    else {
        p[0] = 0;
        p[1] = 1;
        p[2] = 2;
        
        cout << p[2] << ", "<< p[1] << ", "<< p[0] << endl;
        
        delete[] p;
    }
}
