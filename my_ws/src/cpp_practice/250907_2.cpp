#include <iostream>

namespace A
{
	void fuction()
	{
		std::cout << "Function 1";
	}
}

namespace B
{
	void fuction()
	{
		std::cout << "Function 2";
	}
}

int main()
{
	A::fuction();
	return 0;
}