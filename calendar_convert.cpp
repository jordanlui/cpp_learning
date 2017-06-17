// Conversion Gregorian to Julian
#include <iostream>
using namespace std;


void greg_julian(int y, int m, int d)
{
	// converts gregorian date to julian
	float newyear = 367 * y - 7 * ( (y + (m + 9) / 12) / 4) + 275 * m / 9 + d + 1721013.5;
	cout << newyear;
}

void julian_greg(int j)
{
	// converts julian date to gregorian
	// for now we just return the same value.
	cout << j;
}

main()
{
    std::cout << "Calendar Conversion! \n";
    int y = 2017;
    int m = 6;
    int d = 17;
    greg_julian(y,m,d);
}