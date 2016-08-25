//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 7 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/26/2015
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
#include "SortedSet.h"

int main()
{
    cout << "----------testing add-------------" << endl;
  {
    cout << "sset9 constructed" << endl;
    SortedSet sset9;
    cout << "sset9.add( 50 )" << endl;
    sset9.add( 50 );
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "sset9.add( 20 )" << endl;
    sset9.add( 20 );
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "sset9.add( 100 )" << endl;
    sset9.add( 100 );
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "sset9.add( 30 )" << endl;
    sset9.add( 30 );
    cout << "sset9.add( 80 )" << endl;
    sset9.add( 80 );
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "sset9.add( 20 )" << endl;
    sset9.add( 20 );
    cout << "sset9.add( 30 )" << endl;
    sset9.add( 30 );
    cout << "sset9.add( 50 )" << endl;
    sset9.add( 50 );
    cout << "sset9.add( 80 )" << endl;
    sset9.add( 80 );
    cout << "sset9.add( 100 )" << endl;
    sset9.add( 100 );
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << endl;

    cout << "----------testing in-------------" << endl;
    cout << "using sset9" << endl;
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "20 " << ( sset9.in( 20 ) ? "in" : "not in" ) << endl;
    cout << "30 " << ( sset9.in( 30 ) ? "in" : "not in" ) << endl;
    cout << "50 " << ( sset9.in( 50 ) ? "in" : "not in" ) << endl;
    cout << "80 " << ( sset9.in( 80 ) ? "in" : "not in" ) << endl;
    cout << "100 " << ( sset9.in( 100 ) ? "in" : "not in" ) << endl;
    cout << "0 " << ( sset9.in( 0 ) ? "in" : "not in" ) << endl;
    cout << "25 " << ( sset9.in( 25 ) ? "in" : "not in" ) << endl;
    cout << "40 " << ( sset9.in( 40 ) ? "in" : "not in" ) << endl;
    cout << "90 " << ( sset9.in( 90 ) ? "in" : "not in" ) << endl;
    cout << "200 " << ( sset9.in( 200 ) ? "in" : "not in" ) << endl;
    cout << endl;

    cout << "----------testing & and &= --------" << endl;
    cout << "sset10 constructed" << endl;
    SortedSet sset10;
    sset10.add( 0 );
    sset10.add( 20 );
    sset10.add( 40 );
    sset10.add( 50 );
    sset10.add( 90 );
    sset10.add( 110 );
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "sset10 display: ";
    sset10.display(); cout << endl;
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    sset9.add( 0 );
    sset9.add( 110 );
    cout << "sset9 add 0, 110" << endl;
    cout << "sset9 display: ";
    sset9.display(); cout << endl;
    cout << "sset10 display: ";
    sset10.display(); cout << endl;
    cout << "sset11 constructed" << endl;
    SortedSet sset11;
    cout << "sset11 = sset9 & sset10;" << endl;
    sset11 = sset9&sset10;
    cout << "sset11 display: ";
    sset11.display(); cout << endl;
  }
  cout << endl;
  cout << endl;
    
    return 0;
}