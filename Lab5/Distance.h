#include <iostream>

using namespace std;

class Distance
{
  private:
    unsigned feet;
    double inches;
    
  public:
    Distance(); // done
    Distance(unsigned, double); // done
    Distance(double); // done
    double convertToInches() const;
    const Distance operator+(const Distance &) const;
    const Distance operator-(const Distance &) const;
    void display() const;
    
  private:
    void init();
};