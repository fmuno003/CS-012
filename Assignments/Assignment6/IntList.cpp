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

IntList::IntList()
{
    head = 0;
    tail = 0;
}
IntList::~IntList()
{
    IntNode* tem;
    while(head != 0)
    {
        tem = head;
        head = head->next;
        delete tem;
    }
}
void IntList::display() const
{
    IntNode* tem = head;
    if(head != 0)
    {
        tem = head->next;
        cout << head->data;
        while(tem != 0)
        {
            cout << " " << tem->data;
            tem = tem->next;
        }
    }
}
void IntList::push_front(int value)
{
    if(head != 0)
    {
        IntNode* tem = new IntNode(value);
        tem->next = head;
        head = tem;
    }
    else
    {
        head = new IntNode(value);
        tail = head;
    }
}
void IntList::pop_front()
{
    
    if(head == 0)
    {
        return;
    }
    
    IntNode* tem = head;
    head = head->next;
    delete tem;
    
    if(head == 0)
    {
        tail = 0;
    }
}
void IntList::push_back(int value)
{
    if(head != 0)
    {
        IntNode* temp = new IntNode(value);
        tail->next = temp;
        tail = temp;
    }
    else
    {
        head = new IntNode(value);
        tail = head;
    }
}
void IntList::select_sort()
{
    for(IntNode* i = head; i != 0; i = i->next)
    {
        int minimum = i->data;
        for(IntNode* j = i->next; j != 0; j = j->next)
        {
            if (j->data < minimum)
            {
                minimum = j->data;
                j->data = i->data;
                i->data = minimum;
            }
        }
    }
}
void IntList::insert_sorted(int value)
{
    if(head == 0)
    {
        push_front(value);
    }
    else if(head->next == 0)
    {
        if(head->data >= value)
        {
            push_front(value);
        }
        else
        {
            push_back(value);
        }
    }
    else if(tail->data <= value)
    {
        push_back(value);
    }
    else if(head->data >= value)
    {
        push_front(value);
    }
    
    else
    {
        IntNode* previous = head;
        IntNode* current = head->next;
        IntNode* i = 0;
        
        for(i = head; !((previous->data <= value) && (value <= current->data));
                    i = i->next)
        {
            previous = i->next;
            current = i->next->next;
        }
        
        IntNode* temporary = new IntNode(value);
        temporary->next = current;
        previous->next = temporary;
    }
}
void IntList::remove_duplicates()
{
    for(IntNode* i = head; i != 0; i = i->next)
    {
        int compare = i->data;
        IntNode* previous = i;
        for(IntNode* j = i->next; j != 0;)
        {
            if(compare == j->data && j->next != 0)
            {
                previous->next = j->next;
                delete j;
                j = previous;
            }
            else if(compare == j->data && j == tail)
            {
                tail = previous;
                delete j;
                tail->next = 0;
            }
            
            if(j == previous)
            {
                j = j->next;
            }
            else
            {
                j = j->next;
                previous = previous->next;
            }
        }
    }
}