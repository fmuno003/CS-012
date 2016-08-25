//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn1/main.cpp 
/// @brief Assignment 1 for CS 12 Summer 2015
///
/// @author Francisco Munoz [fmuno003@ucr.edu]
/// @date 07/31/2015
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
#include <ctime>
#include <cmath>

using namespace std;

double randFloat (double, double);
double rand_mv(double, double);

int main()
{
    srand(333);
    double randomFloating = 0.0;
    double mean = 0.0;
    double variance = 0.0;
    randomFloating = randomFloating + 1 - 1;
    
    cout << "Enter mean: ";
    cin >> mean;
    
    cout << "Enter variance: ";
    cin >> variance;
    
    randomFloating = rand_mv(mean, variance);
    return 0;
}

double randFloat(double a, double b) 
{
    return a + (static_cast<double>(rand()) / RAND_MAX) * (b-a);
}

double rand_mv(double mean, double variance)
{
    double firstValue = 0.0;
    double secondValue = 0.0;
    
    secondValue = sqrt(12 * variance);
    firstValue = (2 * mean - secondValue) / 2;
    
    secondValue = secondValue + firstValue;
    
    cout << firstValue << " " << secondValue << endl;
    return randFloat(firstValue, secondValue);
}