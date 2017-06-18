// Made for learning pointers and memory addressing
#include <iostream>
using namespace std;

void point1()
{
	// Real variables
	int myvar = 25;

	// declare a pointer, 'foo'
	int * foo = &myvar;
	int bar = myvar;
	// dereference the pointer
	int baz = *foo;

	cout << "initial value is " << myvar << ". Pointer value is " << foo << ". Deref value is " << baz;

}

void point2()
{
	// Demonstration of how to declare pointer, use it, access value, write values using pointer
	int value1, value2;
	int * point;

	point = &value1;
	*point = 100;

	point = &value2;
	*point = 200;

	cout << "First value is " << value1 << "\n";
	cout << "Second Value is " << value2 << "\n";
	
}

int main()
{
	point1();
	cout << "\n";
	point2();
}
