//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 5 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/18/2015
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
#include <cstdlib>
using namespace std;

#include "IntVector.h"

IntVector::IntVector()
{
    sz = 0;
    cap = 0;
    data = 0;
    // This function should set both the size and the capacity of the IntVector to 0
    // and will not allocate any memory to store integers.
}
IntVector::IntVector(unsigned size)
{
    sz = size;
    cap = size;
    data = new int[size];
    
    for (unsigned i = 0; i < size; ++i)
    {
        data[i] = 0;
    }
    return;
    /* Sets both the size and capacity of the IntVdector to the value of the parameters
        passed in and dynamically allocates an array of that size as well. */
}
IntVector::IntVector(unsigned size, int value)
{
    sz = size;
    cap = size;
    data = new int[size];
    for(unsigned i = 0; i < size; ++i)
    {
        data[i] = value;
    }
    return;
    /* Sets both the size and capacity of the IntVector to the value of the parameter
    passed in and dynamically allocates an array of that size as well. This function 
    should initialize all elements of the array to the value of the 2nd parameter. */
}
IntVector::~IntVector()
{
    delete[] data;
    // this function should deallocate all remaining dynamically allocated memory.
}
unsigned IntVector::size() const
{
    return sz;
    /* This function returns the current size of the IntVector object, which
    is the value stored in the sz data field. */
}
unsigned IntVector::capacity() const
{
    return cap;
    /* This function returns the current capacity of the IntVector object, which
    is the value stored in the cap data field. */
}
bool IntVector::empty() const
{
    if (sz == 0)
    {
        return true;
    }
    return false;
    /* Returns whether the vector is empty */
}
const int& IntVector::at(unsigned index) const
{
    if(index >= sz)
    {
        exit(1);
    }
    return data[index];
    /* This function will return the value stored in the element at the passed in
    index position. Your function should cause the program to exit if an index
    greater than or equal to the size is passed in. Because the index is an 
    unsigned int the compiler will not allow for a negative value to be passed
    in. */
}
int& IntVector::at(unsigned index)
{
    if(index >= sz)
    {
        exit(1);
    }
    return data[index];
    /* This function will return the value stored at the element at the passed
    in index position. Your function should cause the program to exit if an
    index greater than or equal to the sz is passed in. Because the index
    is an unsigned int the compiler will not allow for a negative value to be
    passed in. */
}
void IntVector::insert(unsigned index, int value)
{
    sz = sz + 1;
    
    if(sz > cap)
    {
        expand();
    }
    if(index >= sz)
    {
        exit(1);
    }
    
    for(unsigned i = sz - 1; i > index; --i)
    {
        data[i] = data[i - 1];
    }
    data[index] = value;
    /* This function will expand the capacity of the vector by amount passed in.
    This function should reallocate memory for the dynamically allocated array
    and update the value of the capacity.
    Make sure you don't create a memory leak here. */
}
void IntVector::erase(unsigned index)
{
    if(index >= sz)
    {
        exit(1);
    }
    
    for(unsigned i = index; i < sz; ++i)
    {
        data[i] = data[i + 1];
    }
    sz = sz - 1;
    
    /* This function removes the value at the position index and shifts all
    of the values at positions greater than the index to the left by 1.
    Size is decreased by 1. This function should call exit(1) if an index value
    greater than or equal to sz is passed in. */
}
const int& IntVector::front() const
{
    return data[0];
    /* This function will return the value stored in the first element. */
}
int& IntVector::front()
{
    return data[0];
    /* This function will return the value stored at the first element. */
}
const int& IntVector::back() const
{
    return data[sz - 1];
    /* This function will return the value stored at the last element. */
}
int& IntVector::back()
{
    return data[sz - 1];
    /* This function will return the value stored at the last element. */
}
void IntVector::assign(unsigned n, int value)
{
    reserve(n);
    sz = n;
    for(unsigned i = 0; i < sz; ++i)
    {
        data[i] = value;
    }
    /* Assigns new content to the vector object, dropping all the elements 
    contained in the vector before the vall and replacing them by those specified
    by the parameters. The new value of size will be n and all values stored in 
    the vector will have the value of the second parameter. */
}
void IntVector::push_back(int value)
{
    sz = sz + 1;
    if(sz == 1)
    {
        data = new int[sz];
    }
    if (sz > cap)
    {
        expand();
    }
    data[sz - 1] = value;
    /* This function inserts a value at the back end of the array.
    Size is increased by 1. If size becomes larger than capacity, this function
    needs to double the capacity. 
    Implement Private helper function named expand to do this for you. */
}
void IntVector::pop_back()
{
    if(empty())
    {
        exit(1);
    }
    sz = sz - 1;
    /* This fucntion jsut needs to decrease size by 1.
    This function should call exit(1) if pop_back is called on an empty vector. */
}
void IntVector::clear()
{
    sz = 0;
    /* This function reduces the size of the vector to 0; */
}
void IntVector::resize(unsigned size)
{
    if(size <= sz)
    {
        sz = size;
    }
    else if(size > sz)
    {
        if(size > cap)
        {
            if(2*cap <= size - cap)
            {
                expand(size - cap);
            }
            else 
            {
                expand();
            }
            
            for(unsigned i = sz; i < size; ++i)
            {
                data [i] = 0;
            }
            
            sz = size;
        }
    }
    /* This function resizes the vector to contain size elements.
    */
}
void IntVector::resize(unsigned size, int value)
{
    if(size <= sz)
    {
        sz = size;
    }
    else if(size > sz)
    {
        if(size > cap)
        {
            if(2*cap <= size - cap)
            {
                expand(size - cap);
            }
            else 
            {
                expand();
            }
            
            for(unsigned i = sz; i < size; ++i)
            {
                data [i] = value;
            }
            
            sz = size;
        }
    }
    /* This function resizes the vector to contain size elements.
    */
}
void IntVector::reserve(unsigned n)
{
    if(n > cap)
    {
        if (2 * cap < n)
        {
            expand(n-cap);
        }
        else
        {
            expand();
        }
    }
    /* This function requests that the capacity be set to n at minimum. This 
    informs the vector of a planned increase in size, although notice that the
    parameter n informs of a minimum, so the resulting capcity may be any capacity
    equal or larger than this.*/
}
void IntVector::expand()
{
    int* tem = data;
    cap = cap * 2;
    if(cap == 0)
    {
        cap = cap + 1;
    }
    data = new int[cap];
    for(unsigned i = 0; i < sz; ++i)
    {
        data[i] = tem[i];
    }
    delete[] tem;
    /* This function will double the capacity of the vector. This function should
    reallocate memory for the dynamically allocated array and update the value
    of capacity.*/
}
void IntVector::expand(unsigned amount)
{
    int* tem = data;
    cap = cap + amount;
    
    data = new int[cap];
    for(unsigned i = 0; i < sz; ++i)
    {
        data[i] = tem[i];
    }
    delete[] tem;

    /* This function will expand the capacity of the vector by the amount passefd in.
    This fucntion should reallocate memory for the dynamically allocated array
    and update the value of capacity.*/
}