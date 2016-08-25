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
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

#include "BBoard.h"
#include "User.h"

const string DASHES = "--------------------------------------------";

BBoard::BBoard()
    : title("")
    {}
    
BBoard::BBoard(const string& ttl)
{
    title = ttl;
}
void BBoard::setup(const string& input_file)
{
    ifstream inFile;
    string usName, passW;
    
    inFile.open(input_file.c_str());
    
    inFile >> usName;
    while(usName != "end")
    {
        inFile >> passW;
        user_list.push_back(User(usName, passW));
        inFile >> usName;
    }
    
    inFile.close();
}
void BBoard::login()
{
    string usName, passW;
    bool found = false;
    
    while(!found)
    {
        cout << "Enter your username (\'Q\' or \'q\' to quit): ";
        cin >> usName;
        
        if (usName == "Q" || usName == "q")
        {
            cout << "Bye!" << endl;
            exit(0);
        }
        
        cout << "Enter your password: ";
        cin >> passW;
        
        found = user_exists(usName, passW);
        
        if(!found)
        {
            cout << "Invalid Username or Password!\n" << endl;
        }
        
        
        
    }
    
    current_user = User(usName, passW);
    
    cout << "\nWelcome back " << current_user.get_username() << "!" << endl;
}
void BBoard::run()
{
    char input;
    
    cout << "Welcome to " << title << endl;
    
    login();
    
    do
    {
        cout << "\nMenu" << endl;
        cout << "   - Display Messages(\'D\' or \'d\')" << endl;
        cout << "   - Add New Message (\'N\' or \'n\')" << endl;
        cout << "   - Quit (\'Q\' or \'q\')" << endl;
        cout << "Choose an action: ";
        cin >> input;
        cin.ignore();
        cout << endl;
        
        if((input!= 'D' && input != 'd') && (input != 'N' && input != 'n') && (input != 'Q' && input != 'q'))
        {
            cout << "\nInvalid action. Please try again.\n" << endl;
            continue;
        }
        
        if (input == 'D' || input == 'd')
        {
            display();
        }
        else if(input == 'N' || input == 'n')
        {
            add_message();
        }
    }
    
    while (input != 'Q' && input != 'q');
    
    cout << "Bye!" << endl;
    exit(0);
}
void BBoard::display() const
{
    if(message_list.size() == 0)
    {
        cout << "\nNothing to Display.\n" << endl;
        return;
    }
    
    cout << DASHES << endl;
    
    for(unsigned i = 0; i < message_list.size(); ++i)
    {
        cout << "Message #" << i + 1 << ": ";
        message_list.at(i).display();
        cout << DASHES << endl;
    }
}
void BBoard::add_message()
{
    string subject, message;
    string temp;
    
    cout << "\nEnter Subeject: ";
    getline(cin, subject);
    cout << "Enter Body: ";
    getline(cin, message);
    
    message_list.push_back(Message(current_user.get_username(), subject, message));
    
    cout << "Message Recorded!" << endl;
}
bool BBoard::user_exists(const string& usName, const string& passW) const
{
    for(unsigned i = 0; i < user_list.size(); ++i)
    {
        if(user_list.at(i).check(usName, passW))
        {
            return true;
            break;
        }
    }
    return false;
}