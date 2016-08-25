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

const int SIZE_ARRAY = 500;

double randFloat (double, double);
void setSequenceArray(double array[], int, double, double);
double findMean(double array[], double, int);
double findVar(double array[], double, double, int);

int main()
{
    srand(333);
    double firstArray[SIZE_ARRAY];
    double secondArray[SIZE_ARRAY];
    double theoreticalMean = 0.0;
    double theoreticalMean2 = -4.0;
    double variance = 3.0;
    double variance2 = 3.0;
    double practicalMean = 0.0;
    double practicalMean2 = 0.0;
    double practicalVar = 0.0;
    double practicalVar2 = 0.0;
    
    
    setSequenceArray(firstArray, SIZE_ARRAY, -3.0, 3.0);
    setSequenceArray(secondArray, SIZE_ARRAY, -7.0, -1.0);
    
    practicalMean = findMean(firstArray, practicalMean, SIZE_ARRAY);
    practicalMean2 = findMean(secondArray, practicalMean2, SIZE_ARRAY);
    
    practicalVar = findVar(firstArray, practicalVar, practicalMean, SIZE_ARRAY);
    practicalVar2 = findVar(secondArray, practicalVar2, practicalMean2, SIZE_ARRAY);
    
    
    cout << theoreticalMean << " " << practicalMean << " "
        << variance << " " << practicalVar << endl;
    cout << theoreticalMean2 << " " << practicalMean2 << " "
        << variance2 << " " << practicalVar2 << endl;
    return 0;
}

double randFloat (double a, double b)
{
    return a + (static_cast<double>(rand()) / RAND_MAX) * (b-a);
}

void setSequenceArray(double array[], int size, double low, double high)
{
    for (int i = 0; i < size; ++i)
    {
        array[i] = randFloat(low, high);
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