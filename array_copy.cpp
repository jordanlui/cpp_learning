// CPP Projects
#include <iostream>
using namespace std;

void copy_fct()
{
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10]; // the new object
	// traditional for loop style
	for (int i=0; i!=10; ++i) // loop
		v2[i] = v1[i];
	// ... stuff?
}

void print()
{
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	// these range for statements require C++11 support
	cout << "This function usees range-for loop and prints each value in array \n";
	for (int x : v)
		cout << x << '\n';

	for (int x : {10,21,32,43,54,65})
		cout << x << '\n';
}

void increment()
{
	// should just print elements
	// Works!
	// The & is a reference, like a pointer.
	cout << "This function just prints element indices, not element values \n";
	int v[] = {0,1,2,3,4,5};
	for (auto& x : v)
		cout << x ;
}

int count_x(char* p, char x)
{
	// count number of x in p[]
	// assume p points to array of char or nothing
	if (p == nullptr) return 0;
	int count = 0;
	for (; p!=nullptr; ++p)
		if (*p==x)
			++count;
	return count;
}

int count_x2(char* p, char x)
{
	// count occurence of x in p[]
	int count = 0;
	while (p) {
		if(*p==x)
			++count;
		++p;
	}
	return count;
}

int main()
{
	cout << "Hello. This script will test some loop activity. \n";
	copy_fct();
	print();
	increment();
	// Quite unclear how the reference count_x function works. I'm not quite understanding concept of references
	char p[] = "abcabc";
	char x[] = "a";
	// int count = count_x(p*,x);
	// cout << count;
	// cout << count_x2(p,x);
}