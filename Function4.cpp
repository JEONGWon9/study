#include <iostream>

using namespace std;

// ## 1.함수 오버로딩 : C++ 함수 문법
// 같은 이름의 함수를 오로지 인자 타입과 개수에 따라 재정의 하는 문법이다.
// 반환 타입에 따른 재정의는 없다.

int Add(int a, int b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

float Add(float a, float b)
{
	return a + b;
}

//float Add(float a, float b)		// 반환 타입에 따른 재정의는 없다. 컴파일 에러!
//{
//	return a + b;
//}

void Add(void)
{
	cout << "void" << endl;
}

int main()
{
	cout << Add(10, 20) << endl;
	cout << Add(10.f, 20.f) << endl;

	return 0;
}

// 자판기를 함수로 기능을 구분지어서 만들어 보시오
