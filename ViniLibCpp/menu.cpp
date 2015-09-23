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

using namespace std;

void Menu(void) {
    int select = 0;

    while (select != 'E') {
        
        ShowMenu();
        cin >> select;

        switch (select) {
            case 1:
                ExampleOverloadedFunction();
                break;
            case 2:
                ExampleRecursiveFunction();
                break;
            case 3:
                cout << "3. \n";
                break;
            case 4:
                cout << "4. \n";
                break;
            case 5:
                cout << "5. \n";
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

void ShowMenu(void)
{
    cout << "_______________________________________________________________________________\n";
    cout << "| Enter number your select and press [return] [ENTER]:                         |\n";
    cout << " ------------------------------------------------------------------------------\n";
    cout << " [1] - Example Overloaded Function.\n";
    cout << " [2] - Example Recursive Function.\n";
    cout << " [3] - Test virtual function.\n";
    cout << " [4] - Test thread.\n";
    cout << " [E] - Exit program.\n";
    cout << "_______________________________________________________________________________\n";
}