//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 3 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/04/2015
///
/// @par Enrollment Notes 
///     Lecture Section: 201
/// @par
///     Lab Section: 221
/// @par
///     TA: Anthony Williams
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <string>
#include <iostream>
#include <vector>

using namespace std;

#include "Date.h"

void test1();
void test2();
void test3();
void test4();
void test5();
void myTest();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    myTest();
    
    return 0;
}
void test1()
{
    cout << "1.Default" << endl;
    Date x = Date();
    cout << "numeric:\t";
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "------------------------" << endl;
}
void test2()
{
    cout << "2. Numeric Date: 7.3.1991" << endl;
    Date x = Date(7, 3, 1991);
    cout << "numeric:\t";
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "-------------------------" << endl;
}
void test3()
{
    cout << "3. Alpha Date: July 3, 1991" << endl;
    Date x = Date("July",3,1991);
    cout << "numeric:\t";
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "-----------------------" << endl;
}
void test4()
{
    cout << "4. Invalid Numeric Date: 0.3.1991 -> 1.3.1991" << endl;
    Date x = Date(0,3,1991);
    cout << "numeric:\t";
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "-----------------------" << endl;
}
void test5()
{
    cout << "5. Invalid Alpha Date: 1.adf.1991 -> 1.1.2000" << endl;
    Date x = Date("adf", 1, 1991);
    cout << "numeric:\t";
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "-----------------------" << endl;
}
void myTest()
{
    cout << "6. Alpha Date: September 1, 2311" << endl;
    Date x = Date("April", 28, 1421);
    cout << "numeric:\t";
    x.printNumeric();
    cout << endl;
    cout << "alpha:\t";
    x.printAlpha();
    cout << endl;
    cout << "-----------------------" << endl;
}