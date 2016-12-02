#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int genRandInt(int, int);

int generateRandom(int, low, int high)
{
		return low + rand() % (high - low + 1);
}
int main()
{
	srand(time(0));
  
	int number_to_guess = genRandInt(1,100);    
	cout << "Guess a number between 1 and 100." << endl;
	int guess;
	cin >> guess;

	while (number_to_guess != guess)
	{
		if (guess >= number_to_guess)
			cout << "Try lower." << endl << "Guess again: ";
		else if (guess <= number_to_guess)
			cout << "Try Higher." << endl << "Guess again: ";
		cin >> guess;
	}
	cout << "You guessed right!!! Congratulations!" << endl;
    return 0;
}
