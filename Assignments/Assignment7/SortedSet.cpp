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

#include "SortedSet.h"

SortedSet::SortedSet()
:IntList ()
{
    head = 0;
    tail = 0;
}
SortedSet::SortedSet(const SortedSet &m)
:IntList(m)
{}
SortedSet::SortedSet(const IntList &m)
:IntList(m)
{
    remove_duplicates();
    select_sort();
}
SortedSet::~SortedSet()
{}
bool SortedSet::in(int data) //works
{
    for(IntNode* loop = head; loop != 0; loop = loop->next)
    {
        if(data == loop->data)
        {
            return true;
        }
    }
    return false;
}
void SortedSet::add(int data)
{
    if(head == 0)
    {
        IntList::push_front(data);
    }
    else if(data > tail->data)
    {
        IntList::push_back(data);
    }
    else if(data < head->data)
    {
        IntList::push_front(data);
    }
    else if(head == tail && head->data != data)
    {
        if(data < head->data)
        {
            IntList::push_front(data);
        }
        else
        {
            IntList::push_back(data);
        }
    }
    else if(tail->data == data)
    {
        return;
    }
    else if(head->data == data)
    {
        return;
    }
    else
    {
        IntNode* temp = head;
        IntNode* firstList;
        while((temp != 0))
        {
            
            if(temp->next->data == data)
            {
                break;
            }
            else if(data < temp->next->data)
            {
                firstList = temp->next;
                temp->next = new IntNode(data);
                temp->next->next = firstList;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
}
void SortedSet::push_front(int data)
{
    add(data);
}
void SortedSet::insert_sorted(int data)
{
    add(data);
}
void SortedSet::push_back(int data)
{
    add(data);
}
SortedSet SortedSet::operator&(const SortedSet &m)
{
    SortedSet List;
    
    for(IntNode *i = m.head; i != 0; i = i->next)
    {
        if(in(i->data) == true)
        {
            List.push_back(i->data);
        }
    }
    return List;
}
SortedSet SortedSet::operator&=(const SortedSet &m)
{
    SortedSet List;
    
    for(IntNode *i = m.head; i != 0; i = i->next)
    {
        if(in(i->data) == true)
        {
            List.push_back(i->data);
        }
    }
    *this = List;
    
    return *this;
}
    
