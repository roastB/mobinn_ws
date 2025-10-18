#include <iostream>

using namespace std;

void param_test(int formal) // formal is a copy of actual
{
	cout << formal << endl; // 50
	formal = 100;
	cout << formal << endl; // 100
}

int main()
{
	int actual = 50;
	
	cout << actual << endl; // 50
	param_test(actual);		// pass actual
	cout << actual << endl; // 50 <--
	return 0;
}