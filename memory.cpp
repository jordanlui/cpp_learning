// Made for learning pointers and memory addressing
// http://www.cplusplus.com/doc/tutorial/pointers/
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

void point_math()
{
	// Basic pointer math
	// Addressing probably constrainted. This caused an issue?
	// Start pointers
	char *mychar;
	short *myshort;
	long *mylong;

	// Print the start
	cout << "Ending. Char is " << mychar << ", short is " << myshort << ", long is " << myshort << "\n";
	

	// shift them
	int shift = 1;

	// ++mychar;
	// ++myshort;
	// ++mylong;

	// // Print results
	// cout << "Ending. Char is " << mychar << ", short is " << myshort << ", long is " << myshort << "\n";

}

void point_string()
{
	// Checking address of a string
	cout << "\n Checking address of a string: ";
	const char * foo = "hello";
	// foo should be a pointer to the address of string literal
	cout << "String pointer is " << foo << ". Addressing test " << foo[4] << *(foo+4) << "\n";
}

void point_int()
{
	// playing with int pointers
	// Note that the int to const int* is not permitted?
	// int x = 123;
	// int *p = x;
	// cout <<"Int pointer  is " << p << ". Addressing test: " << p[1] << "\n";
}

void point_array()
{
	// showing the various ways we can use pointers and dereferencing to access and write variables
	int numbers[5];
	int *p;
	p = numbers; *p = 10;
	p++; *p = 20;
	p = &numbers[2]; *p = 30;
	p = numbers + 3; *p = 40;
	p = numbers; *(p+4) = 50;

	for (int n=0; n<5; n++)
		cout << numbers[n] << ", ";


}

void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}


int main()
{
	point1();
	cout << "\n";
	point2();

	// Practice with array writing with pointers
	point_array();
	// point_math();
	point_string();
	// point_int();

	
}
