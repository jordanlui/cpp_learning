// class creation
#include <iostream>
using namespace std;

// Script is working with custom vector object! :)

// Classes
class Vector {
public:
	Vector(int s) :elem{new double[s]}, sz{s} {} // constructor for vector object
	double& operator[](int i) {return elem[i];} // Subscript function to retrieve elements
	int size() {return sz;} // Function for returning vector size
private:
	double* elem; // pointer to elements
	int sz; // number of elements
};

// Functions
double read_and_sum(int s)
{
	Vector v(s);
	for (int i=0; i!=v.size(); ++i)
		cin >> v[i];
	double sum = 0;
	for (int i=0; i!=v.size(); ++i)
		sum+=v[i];
	return sum;
}

int main()
{
	cout << "Creating Vector class and testing \n";
	Vector(6);
	double sum = read_and_sum(3);
	cout << "sum result is " << sum;
	cout << "\n Hit a key to exit \n";
	getchar();
	double sum2 = read_and_sum(2);
}