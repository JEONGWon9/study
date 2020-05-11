#include <iostream>

using namespace std;

// ## 1.사용자 정의 함수
// 함수 function 기능 기능을 구현하다. input -> output
// void -> 없다.

int Add(int a, int b)		// int : 반환 타입 Add : 함수 이름 int a, int b : 매개변수
{
	int iResult = a + b;		// 함수 몸체
	return iResult;				// iResult : 반환 값 (반환 타입에 맞춰주어야 한다.)
}


// ## 지역 변수 : 함수 지역 내에 선언된 변수를 지역변수라 한다.
// 지역변수는 메모리 공간 중 stack 이라는 공간에 할당된다.
// stack 공간은 함수 시작 시 할당되며 소멸 시점은 함수가 종료될 때이다.
// 메모리에 있는 데이터를 넘겨주는 것이 아니라 값 복사만 이루어진다.(Call by Vaule)(함수 호출 값(복사)에 의한)
// 원본이 아니기 때문에 한계가 있다. 그것을 극복하기 위해서 포인터가 필요하다.

// ## 4. 전역 변수 : Data 영역에 할당 된다.
// Data 영역 : 프로그램 시작 시 할당, 프로그램 종료 시 소멸
// 즉 메모리 사용을 계속 하고 있기 때문에 전역변수는 꼭 필요할 때에만 선언한다.
int iNum1 = 10;
int iNum2 = 20;
int iResult;		

void Mul(void)
{
	cout << iResult << endl;		// 전역변수는 초기화 하지 않으면 자동 0 초기화
	iResult = iNum1 + iNum2;
}

int main()
{
	// ## 2. 함수 호출
	int i = Add(10, 20);
	cout << i << endl;
	cout << Add(10, 200) << endl;
	// 함수는 한번 정의해 두면 언제든지 재사용 할 수 있다.(코드 절약)


	// ## 3. 지역변수
	int iA = 30, iB = 20;
	cout << Add(iA, iB) << endl;	// 인자로 데이터를 넘겨줄 땐 값 복사가 일어난다. call by value
									// 메모리 원본을 넘겨주는 것이 아니다.
									
									
	Mul();
	Mul();
	cout << iResult << endl;

	int iResult = 300;
	cout << iResult << endl;

	return 0;
}