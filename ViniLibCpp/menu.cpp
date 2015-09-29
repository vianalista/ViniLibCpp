/* 
 * File:   main.cpp
 * Author: vinicius
 *
 * Created on 23 de Setembro de 2015, 10:41
 */

#include <iostream>
#include "menu.h"
#include "OverloadedFunction.h"
#include "RecursiveFunction.h"
#include "PointerToFunction.h"
#include "AllocArray.h"
#include "Classes.h"
#include "ParamDefaultValue.h"
#include "ClassesDestructor.h"
#include "OverloadingConstructors.h"
#include "PointerToClasses.h"
#include "AllocatedObjects-Quantity.h"
#include "FriendFunctions.h"
#include "FriendClasses.h"
#include "InheritanceClasses.h"
#include "InheritanceConstructor.h"
#include "Polymorphism.h"
#include "VirtualMember.h"
#include "AbstractBaseClasses.h"
#include "TemplateFunction.h"
#include "TemplateClass.h"

using namespace std;

void Menu(void) {
    int select = 0;

    while (select != 'E') {

        ShowMenu();
        cout << " ==> ";
        cin >> select;
        cout << "\n_______________________________________________________________________________\n";

        switch (select) {
            case 1:
                ExampleOverloadedFunction();
                break;
            case 2:
                ExampleRecursiveFunction();
                break;
            case 3:
                ExamplePointerToFunction();
                break;
            case 4:
                ExampleAllocArray();
                break;
            case 5:
                ExampleClassStatic();
                break;
            case 6:
                ExampleClassDynamic();
                break;
            case 7:
                ExampleParamDefault();
                break;
            case 8:
                ExampleOverloadingConstructor();
                break;
            case 9:
                ExamplePointerToClasses();
                break;
            case 10:
                ExampleAllocatedObjectsQuantity();
                break;
            case 11:
                ExampleAllocatedObjectsVerify();
                break;
             case 12:
                ExampleFriendFunction();
                break;               
             case 13:
                ExampleFriendClasses();
                break;               
             case 14:
                ExampleInheritance();
                break;              
            case 15:
                ExampleInheritanceConstructor();
                break;
            case 16:
                ExamplePolymorphism();
                break;
            case 17:
                ExampleVirtualMember();
                break;
            case 18:
                ExampleAbstractClasses();
                break;
            case 19:
                ExampleTemplate();
                break;
            case 20:
                ExampleTemplateClass();
                break;
            case 'E':
                cout << "Exiting ... \n";
                sleep(2);
                break;
            default:
                cout << "Invalid key ... \n";
                sleep(2);
                break;
        }
    }
}

void ShowMenu(void) {
    cout << "_______________________________________________________________________________\n";
    cout << "| Enter number your select and press [return] [ENTER]:                         |\n";
    cout << " ------------------------------------------------------------------------------\n";
    cout << " [1] - Example Overloaded Function.\n";
    cout << " [2] - Example Recursive Function.\n";
    cout << " [3] - Example Pointer To Function.\n";
    cout << " [4] - Example Alloc Array.\n";
    cout << " [5] - Example Class - Static.\n";
    cout << " [6] - Example Class - Dynamic.\n";
    cout << " [7] - Example Default Param.\n";
    cout << " [8] - Example Overloading Constructor.\n";
    cout << " [9] - Example Pointer To Classes.\n";
    cout << " [10] - Example counter Quantity Allocated Objects.\n";
    cout << " [11] - Example Verify if exist Allocated Objects.\n";
    cout << " [12] - Example Friend Function.\n";
    cout << " [13] - Example Friend Classes.\n";
    cout << " [14] - Example Inheritance Classes.\n";
    cout << " [15] - Example Inheritance Constructor. \n";
    cout << " [16] - Example Polymorphism. \n";
    cout << " [17] - Example Virtual Member/function. \n";
    cout << " [18] - Example Abstract Classes. \n";
    cout << " [19] - Example Template. \n";
    
    cout << " [E] - Exit program.\n";
    cout << "_______________________________________________________________________________\n";
}