#include <iostream>

using namespace std;

//함수는 함수의 유지보수를 위해서 함수의 선언부와 정의부를 나누게 된다.

// ##1.함수의 선언부: 일종의 메뉴판이라 생각하자!
int Add(int a, int b);
int Min(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

int main(void)
{
	cout << Add(4, 2) << endl;
	cout << Min(4, 2) << endl;
	cout << Mul(4, 2) << endl;
	cout << Div(4, 2) << endl;

	return 0;
}


// ##2. 함수의 정의부
int Add(int a, int b)
{
	return a + b;
}

int Min(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}