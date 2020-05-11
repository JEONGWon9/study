#include <iostream>

using namespace std;

// ## 1. 디폴트 매개변수 : C++의 함수 문법
// 함수의 선언부에서 default 값으로 값을 넣어주면 된다.
// 맨 우측에서부터 채워나가는 규칙이 있다.
int Add(int a, int b, int c = 0);

int main(void)
{
	cout << Add(10, 20) << endl;
	cout << Add(10, 20, 30) << endl;
	return 0;
}

int Add(int a, int b, int c)	// 선언부에서 초기화를 했으면 정의부에서 초기화를 할 필요가 없다.
{
	return a + b + c;
}