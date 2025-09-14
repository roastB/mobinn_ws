//// [ C++ 연습 문제 1 ] . 계산기
//// 사용자로부터 두 개의 숫자와 연산자(+, -, *, / ) 를 입력받아 계산 결과를 출력하는 프로그램을 작성하라.
//// 조건: (1) 0으로 나누기를 시도하면 에러 메시지를 출력하고 프로그램을 종료한다.
////       (2) 잘못된 연산자가 들어오면 "잘못된 연산자 입니다."라고 출력한다.
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char op;
//	double  num1, num2, result; // [피드백 1]. num1, num2를 int 대신 double로 선언해야 소수점 계산이 가능함.
//
//	cout << "첫번째 숫자를 입력해주세요 : "; cin >> num1;
//	cout << endl << "등호(+,-,*,/)를 입력해주세요 : "; cin >> op;
//	cout << endl << "두번째 숫자를 입력해주세요 : "; cin >> num2;
//	
//	if (op == '+')
//	{
//		result = num1 + num2;
//	}
//
//	else if (op == '-')
//	{
//		result = num1 - num2;
//	}
//
//	else if (op == '*')
//	{
//		result = num1 * num2;
//	}
//
//	else if (op == '/')
//	{
//		if (num2 != 0)
//		{
//			result = num1 / num2;
//		}
//		else
//		{
//			cout << "0으로 나누기를 시도하셨습니다." << endl;
//			return 0; // [피드백 2]. 0으로 나눌 때는 메시지 출력 후 return 0; 으로 종료해야 안전함.
//		}
//	}
//
//	else
//	{
//		cout << "잘못된 연산자 입니다." << endl;
//		return 0;
//	}
//
//	cout << endl << "결과 : " << result << endl;
//	return 0; 
//}