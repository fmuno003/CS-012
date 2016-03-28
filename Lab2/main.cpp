#include <cstdlib>
#include <iostream>

using namespace std;


void mystrcat (char destination[], const char source[]);
void display(const char array[]);

const int NUM_ELEMENTS = 20;

int main()
{
    int size = 0;
    char destArray[NUM_ELEMENTS] = "";
    char userName[NUM_ELEMENTS] = "";
    
    cout << "Destination array: ";
    display(destArray);
    mystrcat(destArray,userName);
    cout << "New Destination array: ";
    display(destArray);
    
    
    return 0;
}

void mystrcat(char destination[], const char source[])
{
    int start = 0;
    for (int i = 0; destination[i] != '\0'; ++i)
    {
        ++start;
    }
    for(int j = 0; source[j] != '\0'; ++j)
    {
        destination[start] = source[j];
        ++start;
    }
    destination[start] = '\0';
    return;
}

void display(const char array[])
{
    for (int i = 0; array[i] != '\0'; ++i)
    {
        cout << array[i];
    }
    cout << endl;
    return;
}