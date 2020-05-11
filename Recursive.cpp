#include <iostream>

using namespace std;

// ## 1. 재귀 함수 : 함수가 내부에서 자기 자신을 호출하는 함수
void Recursive(int n)
{
	if (n <= 0)				// 재귀 함수에는 탈출 조건이 필수이다.
		return;				// 조건이 없으면 실행이 반복되다가 프로그램이 터지게 된다.
							// 함수가 호출될 때마다 stack에 쌓이다 공간이 모자라서 결국 stack over flow가 발생한다.
	cout << "재귀 호출" << endl;
	Recursive(--n);
}

int main()
{
	Recursive(3);


	return 0;
}