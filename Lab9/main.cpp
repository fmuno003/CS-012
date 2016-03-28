#include <iostream>
using namespace std;

#include "Music_collection.h"

int main()
{
    Music_collection Alpha;
    Music_collection Beta(Alpha);
    Music_collection Gamma;
    Gamma = Beta;
    cout << Alpha << Beta << Gamma;
    return 0;
}