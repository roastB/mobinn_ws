#include <iostream>

using namespace std;

void print_world()  // 함수를 정의함
{
	cout << "World" << endl;
	cout << "from print_world()" << endl;
}

void print_hello() // 함수를 정의함
{
	cout << "Hello" << endl;
	print_world(); // 정의된 함수를 호출함 (print_world())
	cout << "from print_hello()" << endl;
}

int main()
{
	print_hello(); // 정의된 함수를 호출함 (print_hello())
	cout << "from main()" << endl;
	return 0;
}