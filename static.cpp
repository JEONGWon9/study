#include <iostream>

using namespace std;

// ##1. static 변수 (정적 변수) : Data 영역에 할당된다.
int Func_Sum()
{
	static int iNum = 0;		// 선언과 동시에 초기화는 최초 1회만 실행됨	
								// static 변수는 최초에 한번만 실행된다.
								// 전역변수와 마찬가지로 초기화 안하면 자동으로 0으로 초기화 된다.
								// 전역변수와 달리 선언된 지역 내에서만 접근이 가능하다.
								// 메모리는 Data 영역을 쓰기 때문에 프로그램 시작 시 데이터 할당 프로그램 종료 시 데이터 소멸
	return ++iNum;
}

int main()
{
	for (int i = 0; i < 5; ++i)
		cout << Func_Sum() << endl;

	//cout << iNum << endl;	// 지역적 접근 특성을 지니기 때문에 컴파일 에러
	return 0;
}