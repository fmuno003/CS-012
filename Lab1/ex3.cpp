#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

void Display(const vector<int>& V)
{
	for(int i = 0; i < V.size(); ++i)
		cout << v.at() << " ";
	cout << endl;
}
int findValue(const vector<int>& V, int G)
{
	for(int i = 0; i < V.size(); ++i)
		if(V.at(i) == G)
			return i;
	return -1;
}
void removeValue(vecotr<int>& V, int H)
{
	for(int i = H; i + 1 < V.size(); ++i)
		V.at(i) = V.at(i + 1);
	V.pop_back();
}
int main()
{
	int userNum = 1;
	int userNum2;
	vector<int> userVector;
	cout << "Please enter in integers (0 to stop):" << endl;
	while (userNum != 0)
	{
		cin >> userNum;
		if (userNum != 0)
			userVector.push_back(userNum);
	}
	cout << "What number would you like to find and remove?: ";
	cin >> userNum2;
    
	int valuePosition = findValue(userVector, userNum2);
	if (valuePosition >= 0)
	{
		cout << "Found: " << valuePosition << endl;
		removeValue(userVector, valuePosition);
	}
	else
		cout << "Found: " << valuePosition << endl;
	cout << "Result: "; 
	Display(userVector);
	cout << endl;    
    return 0;
}
