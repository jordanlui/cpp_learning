// Conversion Gregorian to Julian
#include <iostream>
using namespace std;


void greg_julian(int y, int m, int d)
{
	// converts gregorian date to julian
	float newyear = 367 * y - 7 * ( (y + (m + 9) / 12) / 4) + 275 * m / 9 + d + 1721013.5;
	cout << newyear;
}

void greg_input()
{
	// Asks user for the greg-to-julian conversion parameters
	int y, m, d;
	// Accept user inputs
    cout << "Enter a Gregorian date, receive Julian Date \n";
    cout << "Enter year: ";
    cin >> y;
    cout << "Enter Month: ";
    cin >> m;
    cout << "Enter Day: ";
    cin >> d;
    greg_julian(y,m,d);
}

void julian_greg(int j)
{
	// converts julian date to gregorian
	// for now we just return the same value.
	cout << j;
}

int main()
{
    std::cout << "Calendar Conversion! \n";
    bool running = true;
    while (running==true) {
		// Take input for gregorian conversion
		greg_input();


		// Switch case to determine if we continue or not
	    cout << "Continue? \n";
	    char answer = 0;
	    cin >> answer;
	    switch (answer) {
	    	case 'y':
	    		// If 'y', we continue
	    		cout << "Another round \n";
	    		// return true;
	    		break;
	    	case 'n':
	    		cout << "Halting \n";
	    		return false;
	    		break;
    		default:
    			cout << "Assume we'll continue \n";
    			break;
		    }
		}
}