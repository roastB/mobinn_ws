#include <iostream>

int main()
{
	int values[] = { 1,2,-1,3,-1,-99,7,8,9 };

	for (int idx = 0; idx < 9; idx++)
	{
		if (values[idx] == -99)
			break;
		else if (values[idx] == -1)
			continue;
		else
			std::cout << values[idx] << std::endl;
	}

	return 0;
}