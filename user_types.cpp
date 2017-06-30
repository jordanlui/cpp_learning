// Learning types
#include <iostream>
using namespace std;

// Define our custom structures
struct Vector {
	int sz; // number elements
	double* elem; // pointer to the elements
};



// Code to initialize vector
void vector_init(Vector& v, int s)
{
	v.elem = new double[s]; // allocate array of s doubles
	v.sz = s;
}

// Functions
double read_and_sum(int s)
// read s integers from cin and return their sum. s should be positive
// This function appears to work b/c it doesn't crash but it doesn't return the desired number.
{
	Vector v; // make our vector object
	vector_init(v,s); // initialize vector object with our input entries
	for (int i=0; i!=s; ++i)
		cin >> v.elem[i]; // put into elements
	double sum = 0;
	for (int i=0; i!=s; ++i)
		sum += int(v.elem[i]); // take sum of elements. Format into to ensure addition works?
	cout << "Function completed";
	cout << sum;
	return sum;
	

}

int main()
{
	cout << "This is the main script \n Learning to use User defined types \n";
	int sum = read_and_sum(4);
	cout << sum;
	cout << "wait to exit";
	getchar();
	read_and_sum(2);
}