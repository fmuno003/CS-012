#include <iostream>
#include <cmath>

using namespace std;

#include "Distance.h"

Distance::Distance() //done
{
    feet = 0;
    inches = 0.0;
}
Distance::Distance(unsigned f, double i) //done
{
    Distance a;
    
    if (i < 0.0)
    {
        i = i * -1.0;
    }
    if (i >= 12.0)
    {
        a.feet = f;
        a.inches = i;
        a.init();
        feet = a.feet;
        inches = a.inches;
        return;
    }
    feet = f;
    inches = i;
}
Distance::Distance(double i) // done
{
    if (i < 0.0)
    {
        i = i * -1.0;
    }
    
    feet = 0;
    inches = i;
    init();
    return;
}
double Distance::convertToInches() const // done
{
    return ((feet * 12) + inches);
}
const Distance Distance::operator+(const Distance& rhs) const // done
{
    double b = rhs.convertToInches();
    double c = convertToInches();
    double d = b + c;
    Distance one(d);
    return one;
}
const Distance Distance::operator-(const Distance& rhs) const
{
    double b = rhs.convertToInches();
    double c = convertToInches();
    double d = b - c;
    Distance one(d);
    if (d < 0.0)
    {
        d = d * -1;
    }
    return one;
}
void Distance::display() const
{
    cout << feet << "\' " << inches << "\"" << endl;
}
void Distance::init()
{
    int a = floor(inches / 12);
    feet += a;
    inches = inches - (a * 12.0);
    return;
}