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
#ifndef SORTEDSET_H
#define SORTEDSET_H

#include "IntList.h"

class SortedSet: public IntList
{
    public:
        SortedSet();
        SortedSet(const SortedSet& );
        SortedSet(const IntList& );
        ~SortedSet();
        bool in(int data);
        SortedSet operator&(const SortedSet &m);
        void add(int data);
        void push_front(int data);
        void push_back(int data);
        void insert_sorted(int data);
        SortedSet operator&=(const SortedSet &m);
        
        
};

#endif