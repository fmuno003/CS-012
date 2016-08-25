//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 4 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/10/2015
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

#include "Message.h"

Message::Message()
    : author(""), subject(""), body("")
    {}
    
Message::Message(const string& athor, const string& subjct, const string& body)
    : author(athor), subject(subjct), body(body)
    {}
    
void Message::display() const
{
    cout << subject << endl;
    cout << "from " << author << ": " << body << endl;
}