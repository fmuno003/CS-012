#include <cstdlib>
#include <iostream>

using namespace std;

const int NUM_ELEMENTS = 20;

void mystrcat(char destination[], const char source[])
{
	int start = 0;
	for(int i = 0; destination[i] != '\0'; ++i)
		++start;
	for(int j = 0; source[j] != '\0'; ++j)
	{
		destination[start] = source[j];
		++start;
	}
	destination[start] = '\0';
}
void display(const char array[])
{
	for(int i = 0; array[i] != '\0'; ++i)
		cout << array[i];
	cout << endl;
}
int main()
{
	int size = 0;
	char destArray[NUM_ELEMENTS], userName[NUM_ELEMENTS] = "";
    
	cout << "Destination array: ";
	display(destArray);
	mystrcat(destArray,userName);
	cout << "New Destination array: ";
	display(destArray);
   
	return 0;
}
