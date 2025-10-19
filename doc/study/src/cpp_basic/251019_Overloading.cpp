#include <iostream>

using namespace std;

int add_num(int, int);
double add_num(double, double);

int main()
{
	cout << add_num(10, 20) << endl;
	cout << add_num(10.0, 20.0) << endl;
	return 0;
}

int add_num(int a, int b)
{
	return a + b;
}

double add_num(double a, double b)
{
	return a + b;
}