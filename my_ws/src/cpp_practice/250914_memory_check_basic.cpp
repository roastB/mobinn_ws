// [ C++ 연습 문제 3 ] . 메모리 확인 테스트
// 변수의 값과 메모리 크기를 확인하는 프로그램을 작성하라.
//
// 목표:
//   - 기본 자료형 변수의 메모리 사용을 확인하고, 값 변경 시 동작을 이해한다.
//
// 조건:
//   (1) int형 변수 a, double형 변수 b, char형 변수 c를 선언하고 초기값을 넣는다.
//   (2) 각 변수의 값과 메모리 크기(sizeof())를 출력한다.
//       예시 출력: "int a, 크기: 4 bytes, 값: 10"
//   (3) 각 변수의 값을 다른 값으로 변경한다.
//   (4) 변경 후 각 변수의 값과 메모리 크기를 다시 출력한다.
//   (5) 출력 결과를 보고 자료형별 메모리 크기 차이를 이해한다.
//   (6) 반복문, 조건문, 변수 연산 등을 활용하여 다양한 값으로 테스트해볼 수 있다.
//
// 추가 학습 포인트 (선택):
//   - 변수끼리 연산 후 결과값과 메모리 크기 확인
//   - sizeof()를 통해 포인터 변수와 일반 변수의 크기 비교 (포인터는 아직 학습하지 않았다면 나중에 활용)

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	double b = 12.34567;
	char c = 'M';
	cout << "int a, 크기: " << sizeof(a) << "bytes, 값: " << a << endl;
	cout << "double b, 크기: " << sizeof(b) << "bytes, 값: " << b << endl;
	cout << "char c. 크기: " << sizeof(c) << "bytes, 값: " << c << endl;

    a = 20;
    b = 3.14;
    c = 'Z';
    cout << "\n변경 후 값 확인:" << endl;
    cout << "int a, 크기: " << sizeof(a) << " bytes, 값: " << a << endl;
    cout << "double b, 크기: " << sizeof(b) << " bytes, 값: " << b << endl;
    cout << "char c, 크기: " << sizeof(c) << " bytes, 값: " << c << endl;

    // [피드백] 자료형별 메모리 크기 차이를 눈으로 확인하고 이해하는 것이 목적
    return 0;
}