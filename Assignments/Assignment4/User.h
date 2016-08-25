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
#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
    private:
        string username;
        string password;
        
    public:
        User();
        User(const string& usName, const string& passW);
        string get_username() const;
        bool check (const string& usName, const string& passW) const;
        bool set_password(const string& oldPass, const string& newPass);
};

#endif