#include <iostream>

using namespace std;

void param_test(int formal)
{
	cout << formal << endl; // [2] 50
	formal = 100;
	cout << formal << endl; // [3] 100
}

int main()
{
	int actual = 50;
	cout << actual << endl; // [1] 50
	param_test(actual);		// 즉, actual의 값을 복사해서 formal 매개변수에게 전달되었을 뿐!
	cout << actual << endl; // [4] 50
	return 0;
}