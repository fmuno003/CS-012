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
#ifndef BBOARD_H
#define BBOARD_H

#include <iostream>
#include <fstream>
#include <vector>
#include "User.h"
#include "Message.h"

using namespace std;

class BBoard
{
    private:
        string title;
        vector<User> user_list;
        User current_user;
        vector<Message> message_list;
        
        bool user_exists(const string &name, const string &pass) const;
        void display() const;
        void add_message();
    
    public:
        BBoard();
        BBoard(const string &ttl);
        void setup(const string &input_file);
        void login();
        void run();
};

#endif