#include <iostream>

int main()
{
	int a = 9;
	int b = 19;
	int result = 0;

	result = (a > b) ? a : b;

	/* ? : if-else ������!
	if (a > b)
	{
		result = a;
	}
	else
	{
		result = b;
	}*/

	std::cout << result;
}