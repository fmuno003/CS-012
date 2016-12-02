#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// given the coordinates of a point (x,y) computes if the point is inside the circle
// centered at the origin with radius R. Returns 'true' if it is inside, 'false' otherwise.
bool is_inside (double x, double y, double R)
{
	double H = sqrt(pow(x,2.0) + pow(y,2.0));
	if (H <= R)
		return true;
	else
		return false;
}
// given the side s, of a square that is centered at the origin,
// chooses a random coordinates inside the square, and calls is_inside function
// to test if the point is inside the circle or not.
bool throw_dart(int s)
{
	int x,y;
	x = (-s/2) + rand() % (s - 1);
	y = (-s/2) + rand() % (s - 1);
     
	return is_inside(x, y, s/2);
}
int main()
{
	int side = 1000; // this is the side of the square and is also our resolution.
	int tries; // this is the number of tries.
    
	cout << "Please enter the number of tries." << endl;
	cin >> tries;
    
	int in_count = 0; // counter to track number of throws that fall inside
    
	for (int i = 0; i < tries; ++i)
	{
		bool z = throw_dart(side);
		if (z == true)
			++in_count;
        // throw a dart using throw_dart method and increment the counter depending on its output.
    }
	static_cast<double>(in_count);
	static_cast<double>(tries);
	double pi =  4.0 * in_count / tries;
	cout << "Estimated value of pi: " << pi << endl;
	// compute and display the estimated value of PI make sure you are not doing integer division.
	return 0;
}
