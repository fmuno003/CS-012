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

const int SEQUENCE = 1000;
const int SEQUENCE_ONE = 100000;

double randFloat (double, double);
void setSequenceArray(double array[], int, double, double);
double findMean(double array[], double, int);
double findVar(double array[], double, double, int);


int main()
{
    srand(333);
    double meanSmall = 0.0;
    double meanBig = 0.0;
    double varBig = 0.0;
    double varSmall = 0.0;
    double smallArray[SEQUENCE];
    double bigArray[SEQUENCE_ONE];
    double number1;
    double number2;
    int meanS = 0;
    int meanB = 0;
    int varB = 0;
    int varS = 0;
    
    cin >> number1;
    cin >> number2;
    
    meanS = (number1 + number2) / 2;
    meanB = (number1 + number2) / 2;
    
    varS = (pow(number2 - number1, 2.0)) / 12;
    varB = (pow(number2 - number1, 2.0)) / 12;
    
    setSequenceArray(smallArray, SEQUENCE, number1, number2);
    setSequenceArray(bigArray, SEQUENCE_ONE, number1, number2);
    
    
    meanSmall = findMean(smallArray, meanSmall, SEQUENCE);
    meanBig = findMean(bigArray, meanBig, SEQUENCE_ONE);
    varBig = findVar(bigArray, varBig, meanBig, SEQUENCE_ONE);
    varSmall = findVar(smallArray, varSmall, meanSmall, SEQUENCE);
    
    cout << meanS << " " << meanSmall << " " << varS << " " << varSmall << endl; 
    cout << meanB << " " << meanBig << " " << varB << " " << varBig;
    return 0;
}

double randFloat(double a, double b) 
{
    return a + (static_cast<double>(rand()) / RAND_MAX) * (b-a);
}

void setSequenceArray(double array[], int size, double a, double b)
{
    for (int i = 0; i < size; ++i)
    {
        array[i] = randFloat(a, b);
    }
}

double findMean(double array[], double average, int sizeArray)
{
    average = 0;
    for (int i = 0; i < sizeArray; ++i)
    {
        average = average + array[i];
    }
    average = average / sizeArray;
    return average;
}

double findVar(double array[], double variance, double average, int sizeArray)
{
    for (int i = 0; i < sizeArray; ++i)
    {
        variance = variance + (pow(array[i] - average,2.0)); 
    }
    variance = variance / sizeArray;    
    
    return variance;
}