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
#ifndef INTLIST_H
#define INTLIST_H

struct IntNode
{
    int data;
    IntNode* next;
    IntNode(int data)
    {
        this->data = data;
        next = 0;
    }
};
class IntList
{
    protected:
        IntNode* head;
        IntNode* tail;

    public:
        ~IntList();
        IntList();
        void display() const;
        void push_front(int);
        void pop_front();
        void push_back(int);
        void select_sort();
        void insert_sorted(int);
        void remove_duplicates();
        IntList(const IntList &);
        IntList & operator=(const IntList&);
        /*void clear;*/
};

#endif