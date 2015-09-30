#include <iostream>
#include "Namespace.h"

using namespace std;

namespace myNamespace {
    int x = 1;
}

//Alias for namespcae
namespace namespaceA = myNamespace;

namespace namespaceB {
    float x = 1.321;
}

void ExampelNamespace(void) {
    {
        //When without [using namespace], need call var with Name namespace plus ::"
        cout << " = namespaceA::x = " << namespaceA::x << endl;
        
        using namespace namespaceA;

        cout << " = x = " << x << endl;
    }

    /**
     * When namespace have the same name of variables(elements), they need separate
     * blocks, use {}, or diferents functions/files.
     * Example mensagem error:
     * : error: reference to ‘x’ is ambiguous
     * : error: candidates are: float namespaceB::x
     * : error:                 int myNamespace::x
     * : error: reference to ‘x’ is ambiguous
     * : error: candidates are: float namespaceB::x
     * : error:                 int myNamespace::x
     */
    {
        using namespace namespaceB;

        cout << " = x = " << x << endl;
    }



}