//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 6 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/23/2015
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

#include "IntList.h"

int main()
{
    IntList theList;
    
    theList.push_front(7);
    theList.push_front(9);
    theList.push_front(17);
    
    theList.display();
    cout << endl << endl;
    
    theList.pop_front();
    theList.pop_front();
    
    theList.display();
    cout << endl << endl;
    
    theList.push_back(3);
    theList.push_back(5);
    theList.push_back(4);
    theList.push_back(1);
    theList.push_back(3);
    theList.push_back(53);
    theList.push_back(32);
    theList.push_back(19);
    
    theList.remove_duplicates();
    
    theList.display();
    cout << endl << endl;
    
    theList.select_sort();
    theList.display();
    cout << endl << endl;
    
    theList.insert_sorted(10);
    theList.display();
    cout << endl << endl;
    
    return 0;
}