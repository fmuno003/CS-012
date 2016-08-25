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

using namespace std;

class Date
{
    private:
        unsigned numDay;
        unsigned numMonth;
        string monthName;
        unsigned numYear;
        unsigned day;
        unsigned month;
        unsigned year;
        unsigned daysPerMonth(unsigned numMonth, unsigned numYear) const;
        bool isLeap(unsigned) const;
        string name(unsigned numMonth) const;
        unsigned number(const string& mn) const;
        
    public:
        Date();
        Date(unsigned numMonth, unsigned numDay, unsigned numYear);
        Date(const string& mn, unsigned numDay, unsigned numYear);
        void printNumeric() const;
        void printAlpha() const;
        Date addDays(int) const;
};