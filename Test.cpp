#include<iostream>

using namespace std;

//namespace : 중복 정의 된 이름들의 충돌을 방지하기 위해서 c++부터 등장
namespace A
{
	void Render()
	{
		cout << "A" << endl;
	}
}

namespace B
{
	void Render()
	{
		cout << "B" << endl;
	}
}

using namespace A;
using namespace B;

int main()
{
	A::Render();

	// printf : 함수
	// cout  : 객체
	// << cout 앞에서 연산자가 재정의 된다.
	// endl : c에서는 \n이랑 같은 기능

	cout << "Hello World" << endl;

	int Num;
	cin >> Num;

	cout << Num << endl;
	return 0;
}

/*
전처리기 -> 컴파일러 -> 어셈블러 -> 링커

전처리 과정 : 헤더파일 삽입, 매크로 치환 및 적용
#include <iostream> : 전처리기 : 사용자가 작성한 코드를 컴파일 전 전처리 지시자에 맞게 적절히 변경
# : 전처리 지시자 선언

컴파일 과정 : 어셈블리어 코드로 변환
어셈블리어란 : Low Level 언어(수준이 낮은 언어가 아니라 컴퓨터에 가까운 언어)

어셈블 과정 : 바이너리(기계어)로 변환 obj 파일 생ㅅ어

링킹 과정 : 프로그램에서 사용된 표준 c 라이브러리, 사용자 라이브러리들을 링크시켜 최종 실행파일을 만든다.



*/