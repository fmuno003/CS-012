//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn2/main.cpp 
/// @brief Assignment 2 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/01/2015
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
#include <iomanip>
#include <fstream>

using namespace std;

const int NUM_ROW = 6;
const int NUM_COL = 8;

void setGridDimensions(double grid[][NUM_COL], double, double, double, double);
void updateTemperatures(double grid[][NUM_COL], double&);
bool isInEquilibrium(double, double);


int main()
{
    ifstream inputFile;
    ofstream outputFile;
    
    string inFileName;
    string outFileName;
    
    double grid[NUM_ROW][NUM_COL] = {0};
    bool inEquilibrium = false;
    double top = 0.0;
    double right = 0.0;
    double bottom = 0.0;
    double left = 0.0;
    double tolerance = 0.0;
    double maxDifference = 0.0;
    
    cout << "Enter the name of the input file: ";
    cin >> inFileName;
    cout << "Enter the name of your output file: ";
    cin >> outFileName;
    
    inputFile.open(inFileName.c_str());
    outputFile.open(outFileName.c_str());
    
    if (!inputFile.is_open())
    {
        cout << "Could not locate: " << inFileName << endl;
        return 0;
    }
    inputFile >> top >> right >> bottom >> left >> tolerance;
    
    setGridDimensions(grid, top, bottom, left, right);
    while(!inEquilibrium)
    {
        updateTemperatures(grid, maxDifference);
        inEquilibrium = isInEquilibrium(tolerance, maxDifference);
    }
    
    for (int i = 1; i < NUM_ROW - 1; ++i)
    {
        for(int j = 1; j < NUM_COL - 1; ++j)
        {
            outputFile << setw(10) << grid [i][j] << " ";
        }
        outputFile << endl;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
void setGridDimensions(double grid[][NUM_COL], double top, double bottom, 
                        double left, double right)
{
    for (int i = 0; i < NUM_ROW; ++i)
    {
        if(i == 0)
        {
            for(int j = 0; j < NUM_COL; ++j)
            {
                grid[i][j] = top;
            }
        }
        else if(i == NUM_ROW - 1)
        {
            for(int j = 0; j < NUM_COL; ++j)
            {
                grid[i][j] = bottom;
            }
        }
        else
        {
            grid[i][0] = left;
            grid[i][NUM_COL - 1] = right;
        }
    }
}
void updateTemperatures(double grid[][NUM_COL], double& maxDifference)
{
    double temperature = 0.0;
    maxDifference = 0.0;
    for(int i = 1; i < NUM_ROW - 1; ++i)
    {
        for(int j = 1; j < NUM_COL - 1; ++j)
        {
            temperature = grid[i][j];
            
            grid[i][j] = (grid[i][j - 1] + grid[i - 1][j] + grid[i][j + 1]
                            + grid[i + 1][j]) / 4;
            
            if(grid[i][j] - temperature > maxDifference)
            {
                maxDifference = grid[i][j] - temperature;
            }
        }
    }
}
bool isInEquilibrium(double tolerance, double maxDifference)
{
    return (maxDifference <= tolerance);
}