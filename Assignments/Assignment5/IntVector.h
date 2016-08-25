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
#ifndef INTVECTOR_H
#define INTVECTOR_H

class IntVector
{
    private:
        unsigned sz;
        unsigned cap;
        int* data;
    
    public:
        IntVector();
        IntVector(unsigned);
        IntVector(unsigned, int);
        ~IntVector();
        unsigned size() const;
        unsigned capacity() const;
        bool empty() const;
        const int& at(unsigned) const;
        int& at(unsigned);
        void insert(unsigned, int);
        void erase(unsigned);
        const int& front() const;
        int& front();
        const int& back() const;
        int& back();
        void assign(unsigned, int);
        void push_back(int);
        void pop_back();
        void clear();
        void resize(unsigned);
        void resize(unsigned, int);
        void reserve(unsigned);
        
    private:
        void expand();
        void expand(unsigned);
        
};
#endif