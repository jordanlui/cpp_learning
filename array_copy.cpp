// CPP Projects
#include <iostream.h>

void copy_fct()
{
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10]; // the new object

	for (auto i=0; i!=10; ++i) // loop
		v2[i] = v1[i];
	// ... stuff?
}

void main()
{
	cout << "Hello";
	copy_fct()
}