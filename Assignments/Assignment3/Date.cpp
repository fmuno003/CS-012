//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn3/main.cpp 
/// @brief Assignment 3 for CS 12 Summer 2015
///
/// @author Francisco Munoz fmuno003@ucr.edu
/// @date 08/04/2015
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
#include <string>
#include <iostream>
#include <vector>

using namespace std;

#include "Date.h"

Date::Date()
    : day(1), month(1), year(2000), monthName("January")
    {}
    
Date::Date(unsigned numMonth, unsigned numDay, unsigned numYear) // done
{
    bool wasFixed = false;
    month = numMonth;
    day = numDay;
    year = numYear;
    
    if(day >= 32)
    {
        day = daysPerMonth(numMonth, numYear);
        wasFixed = true;
    }
    else if (numDay >= 31 && (numMonth == 4 || numMonth == 6 || numMonth == 9 || numMonth == 11))
    {
        day = daysPerMonth(numMonth, numYear);
        wasFixed = true;
    }
    else if((numDay > 28 && numMonth == 2 && !isLeap(numYear)) || (numDay > 29 && numMonth == 2 && isLeap(numYear)))
    {
        day = daysPerMonth(numMonth, numYear);
        wasFixed = true;
    }
    
    if(month > 12)
    {
        month = 12;
        wasFixed = true;
    }
    else if(month < 1)
    {
        month = 1;
        wasFixed = true;
    }
    
    if(wasFixed)
    {
        cout << "Invalid data values: Date corrected to ";
        cout << month << "/" << day << "/" << year << "." << endl;
    }
    monthName = name(month);
}
Date::Date(const string& mn, unsigned numDay, unsigned numYear) // done
{
    year = numYear;
    day = numDay;
    
    bool wasFixed = true;
    
    if (mn == "January" || mn == "january")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "February" || mn == "february")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "March" || mn == "march")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "April" || mn == "april")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "May" || mn == "may")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "June" || mn == "june")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "July" || mn == "july")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "August" || mn == "august")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "September" || mn == "september")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "October" || mn == "october")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "November" || mn == "november")
    {
        wasFixed = false;
        monthName = mn;
    }
    else if (mn == "December" || mn == "december")
    {
        wasFixed = false;
        monthName = mn;
    }
    
    if(wasFixed)
    {
        cout << "Invalid month name: the Date was set to 1/1/2000" << endl;
        monthName = "January";
        day = 1;
        year = 2000;
        wasFixed = false;
    }

    if(day >= 32)
    {
        year = numYear;
        day = daysPerMonth(number(monthName), numYear);
        wasFixed = true;
    }
    else if(numDay >= 31 && ((number(monthName) == 4 || number(monthName) == 6) || number(monthName) == 9 || number(monthName) == 11))
    {
        year = numYear;
        day = daysPerMonth(number(monthName), numYear);
        wasFixed = true;
    }
    else if((day > 28 && number(monthName) == 2 && !isLeap(numYear)) || (numDay > 29 && number(monthName) == 2 && isLeap(numYear)))
    {
        year = numYear;
        day = daysPerMonth(number(monthName), numYear);
        wasFixed = true;
    }
    
    
    
    if(wasFixed)
    {
        cout << "Invalid data values: Date corrected to ";
        cout << number(monthName) << "/" << day << "/" << year << "." << endl;
    }
    
    month = number(monthName);
}
void Date::printNumeric() const // done
{
    cout << month << "/" << day << "/" << year;
}
void Date::printAlpha() const // done
{
    cout << monthName << " " << day << ", " << year;
}
bool Date::isLeap(unsigned numYear) const //done
{
    return (year % 4 == 0 && (year % 400 == 0 || !(year % 100 == 0)));
}
unsigned Date::daysPerMonth(unsigned numMonth, unsigned numYear) const // done
{
    if(numMonth == 2 && !isLeap(numYear))
    {
        return 28;
    }
    else if(numMonth == 2 && isLeap(numYear))
    {
        return 29;
    }
    else if(numMonth == 4 || numMonth == 6 || numMonth == 9 || numMonth == 11)
    {
        return 30;
    }
    else 
    {
        return 31;
    }
}
string Date::name(unsigned numMonth) const // done
{
    switch(numMonth % 13)
    {
        case 0:
        case 1:
        {
            return "January";
        }
        case 2:
        {
            return "February";
        }
        case 3:
        {
            return "March";
        }
        case 4:
        {
            return "April";
        }
        case 5:
        {
            return "May";
        }
        case 6:
        {
            return "June";
        }
        case 7:
        {
            return "July";
        }
        case 8:
        {
            return "August";
        }
        case 9:
        {
            return "September";
        }
        case 10:
        {
            return "October";
        }
        case 11:
        {
            return "November";
        }    
        case 12:
        {
            return "December";
        }
    }
    
    return 0;
}
unsigned Date::number(const string& mn) const // done
{
    if(mn == "January")
    {
        return 1;
    }
    else if(mn == "February")
    {
        return 2;
    }
    else if(mn == "March")
    {
        return 3;
    }
    else if(mn == "April")
    {
        return 4;
    }
    else if(mn == "May")
    {
        return 5;
    }
    else if(mn == "June")
    {
        return 6;
    }
    else if(mn == "July")
    {
        return 7;
    }
    else if(mn == "August")
    {
        return 8;
    }
    else if(mn == "September")
    {
        return 9;
    }
    else if(mn == "October")
    {
        return 10;
    }
    else if(mn == "November")
    {
        return 11;
    }
    else if(mn == "December")
    {
     return 12;   
    }
    
    return 0;
}
Date Date::addDays(int numDaysAdd) const // done
{
    Date newDate;
    newDate.day = day;
    newDate.month = month;
    newDate.monthName = monthName;
    newDate.year = year;
    while((newDate.month == 2 && !isLeap(newDate.year) && numDaysAdd > 28) ||
            (newDate.month == 2 && isLeap(newDate.year) && (newDate.day + numDaysAdd > 29))
            || ((newDate.month == 4 || newDate.month == 6 || newDate.month == 9  || newDate.month == 11) 
            && (newDate.day + numDaysAdd > 30)) || (newDate.month == 12 && (newDate.day + numDaysAdd > 31)))
    {
        if(newDate.month == 2 && !isLeap(newDate.year) && (newDate.day + numDaysAdd > 28))
        {
            newDate.month = newDate.month + 1;
            numDaysAdd = numDaysAdd - 28;
        }
        else if(newDate.month == 2 && isLeap(newDate.year) && (newDate.day + numDaysAdd > 29))
        {
            newDate.month = newDate.month + 1;
            numDaysAdd = numDaysAdd - 29;
        }
        else if(newDate.month == 12 && (newDate.day + numDaysAdd > 31))
        {
            newDate.month = 1;
            newDate.year = newDate.year + 1;
            numDaysAdd = numDaysAdd - 31;
        }
        else if(newDate.day + numDaysAdd > 31)
        {
            newDate.month = newDate.month + 1;
            numDaysAdd = numDaysAdd - 31;
        }
        else if(((newDate.month == 4 || newDate.month == 6 || newDate.month == 9  || newDate.month == 11) 
            && (newDate.day + numDaysAdd > 30)))
            {
                newDate.month = newDate.month + 1;
                numDaysAdd = numDaysAdd - 30;
            }
    }
    return newDate;
}