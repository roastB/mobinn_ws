#include <iostream>

using namespace std;

int add_numbers(int, int); // prototype

int main()
{
	int result = 0;
	result = add_numbers(100, 200); // function call + argument
	cout << result << endl;
	return 0;
}

int add_numbers(int a, int b) // function definition + parameter
{
	return a + b;
}