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

enum class Color {red, blue, green};
enum class Traffic_light{green, yellow, red};

// enum functions
Traffic_light& operator++(Traffic_light& t)
// prefix increment code
{
	switch (t){
		case Traffic_light::green: return t=Traffic_light::yellow;
		case Traffic_light::yellow: return t=Traffic_light::red;
		case Traffic_light::red: return t=Traffic_light::green;
	}
}



// Functions
double read_and_sum(int s)
{
	cout << "This function will add several integers. Input now: ";
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
	

	

	cout << "Testing a enumerated class \n";
	// Use these to make more readable code than using symbolic and integer flags
	Color col = Color::red;
	Traffic_light light = Traffic_light::red;
	cout << "Our first light is " << int(light) << "\n";
	// Now switch the light
	Traffic_light next=++light;
	// cout << "Colour is " << col << "And traffic light is " << light;
	cout <<	"Now the light is " << int(light) << "\n";


	cout << "Creating Vector class and testing \n";
	Vector(6);
	double sum = read_and_sum(3);
	cout << "sum result is " << sum;
	cout << "\n Hit a key to exit \n";
	getchar();
	double sum2 = read_and_sum(2);
}