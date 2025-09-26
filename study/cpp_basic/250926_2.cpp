#include <iostream>

using namespace std;

void print_world()
{
	cout << "World" << endl;
	cout << "from print_world()" << endl;
}

void print_hello()
{
	cout << "Hello" << endl;
	print_world();
	cout << "from print_hello()" << endl;
}

int main()
{
	print_hello();
	cout << "from main()" << endl;
	return 0;
}