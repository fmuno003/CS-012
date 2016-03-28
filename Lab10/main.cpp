#include <iostream>
using namespace std;

void reverse(string& s);

int main()
{
    string newString = "Hello my name is";
    reverse(newString);
    cout << newString << endl;
    return 0;
}

void reverse(string& s)
{
    if(s.length() <= 1 )
    {
        return;
    }
    else
    {
        string temp = s.substr(1, s.size() - 2);
        reverse(temp);
        s = s.substr(s.size() - 1) + temp + s.at(0);
    }
}