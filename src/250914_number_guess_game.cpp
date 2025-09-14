//// [ C++ 연습 문제 2 ] . 숫자 맞추기 게임
//// 사용자가 맞춰야 하는 정답 숫자를 상수(const)로 정의하고, 제한된 횟수 안에 맞추는 게임을 작성하라.
//// 조건: (1) SECRET_NUMBER와 MAX_TRIES를 상수로 선언하여 변경할 수 없도록 한다.
////       (2) 사용자가 숫자를 입력하면 정답과 비교하여 결과를 출력한다.
////           - 정답이면 "정답입니다!" 출력 후 게임 종료
////           - 틀리면 "더 큰 숫자입니다." 또는 "더 작은 숫자입니다." 출력
////       (3) 최대 시도 횟수를 다 사용하면 정답을 알려주고 게임 종료
////       (4) 반복문과 조건문을 활용하여 구현한다.
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int SECRET_NUMBER = 17; // [피드백1] 정답 숫자는 상수로 선언하여 변경되지 않도록 함
//	const int MAX_TRIES = 7;
//	int num;
//
//	for(int count = 1; count <= MAX_TRIES ; count++) // [피드백2] while(count < MAX_TRIES)으로도 반복 가능
//	{
//		cout << "숫자 맞추기 게임에 오신 걸 환영합니다! 비밀 숫자를 예측해보세요! : "; cin >> num;
//
//		if (num < SECRET_NUMBER)
//		{
//			cout << "더 큰 숫자입니다." << endl;
//		}
//		else if (num > SECRET_NUMBER)
//		{
//			cout << "더 작은 숫자입니다." << endl;
//		}
//		else
//		{
//			cout << "정답입니다!" << endl;
//			return 0; 
//		}
//	}
//
//	// [피드백3] 반복문 종료 후 정답을 맞추지 못했다면 메시지 출력
//	if (num != SECRET_NUMBER)
//	{
//		cout << "아쉽네요.. 모든 기회를 다 쓰셨습니다! 정답은 " << SECRET_NUMBER << "입니다." << endl;
//		return 0;
//	}
//}