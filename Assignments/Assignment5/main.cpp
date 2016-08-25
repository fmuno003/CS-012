//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 5 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/18/2015
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
#include <iostream>
using namespace std;

#include "IntVector.h"

int main()
{
    IntVector createVect;
    IntVector createVect2(5);
    IntVector createVect3(2, 9);
    
    cout << "Vector 1 size: " << createVect.size() << endl;
    cout << "Vector 2 size: " << createVect2.size() << endl;
    cout << "Vector 3 size: " << createVect3.size() << endl;
    cout << endl;
    
    
    
    return 0;
}