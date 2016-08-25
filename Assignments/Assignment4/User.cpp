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

#include "User.h"

User::User()
    : username(""), password("")
    {}

User::User(const string& usName, const string& passW)
    : username(usName), password(passW)
    {}

string User::get_username() const
{
    return username;
}

bool User::check(const string& usName, const string& passW) const
{
    if (usName == "" || passW == "")
    {
        return false;
    }
    
    if (usName == username && passW == password)
    {
        return true;
    }
    
    return false;
}

bool User::set_password(const string& oldPass, const string& newPass)
{
    if(oldPass != password || username == "")
    {
        return false;
    }
    
    if(oldPass == password)
    {
        password = newPass;
    }
    return true;
}