#include <iostream>
using namespace std;
int main(int argc, char * const argv[]) 
{
	
	int counter = 9;
	
	while (true) {
		
		cout << "Counter: " << counter << endl;;
		counter--;
		
		if (counter == 0) {
			break;
		}
		
	}
	
    return 0;
}