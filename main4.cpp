#include <iostream>

using namespace std;

int main()
{
	// ## 분기문(기준을 통해서 나눈다) 참과 거짓을 통해서 코드의 흐름을 나눈다.(다른말로 조건문)
	// 자판기에서 콜라를 뽑으면 콜라가 나온다.
	// if문 switch문 goto문(비추)

	//if (/*조건식*/)
	//{
	//	// 조건식을 만족하면 수행되는 코드블록
	//}
	//int iA = 10, iB = 20;

	//if (iA > iB)
	//{
	//	cout << "iA가 크다." << endl;
	//}
	//else // 흑백논리
	//{
	//	cout << "iB가 크다." << endl;
	//}

	//int iSelect = 0;
	//cin >> iSelect;

	//if (1 == iSelect)
	//{
	//	cout << "콜라" << endl;
	//}
	//else if (2 == iSelect)
	//{
	//	cout << "환타" << endl;
	//}
	//else if (3 == iSelect)
	//{
	//	cout << "사이다" << endl;
	//}
	//else
	//{
	//	cout << "기타" << endl;
	//}

	//{} 의 의미 : 지역적 의미 또는 영역을 뜻한다.

	//int iNum = 5;
	//if (true)
	//{
	//	int iNum = 100;
	//}
	//cout << iNum << endl;

	//int iNum2 = 5;
	//if (true)
	//{
	//	iNum2 = 100;
	//}
	//cout << iNum2 << endl;
	
	//if (true)
	//{
	//	int iNum3 = 10;
	//}
	//cout << iNum3 << endl;		// main함수 입장에서는 iNum3의 존재를 알지 못한다.

	
	//if (true)
	//	cout << "한줄 조건문, 반복문은 {} 를 생략 가능" << endl;


	//// switch문(상수 조건문)
	//switch (/*정수 조건*/)	// 실수가 올 수 없다.
	//{
	//case /*상수 분기(정수형태)*/:
	//	//해당 상수 분기문에 해당하면 수행되는 코드 영역
	//	break;
	//default:	// 아무 경우에도 해당되지 않았을 경우
	//	break;	// switch문 탈출 혹은 가장 가까운 반복문 한개를 탈출
	//}

	//int iSelect = 0;
	//cin >> iSelect;
	//switch (iSelect)
	//{
	//case 1:
	//	cout << "콜라" << endl;
	//	break;
	//case 2:
	//	cout << "사이다" << endl;
	//case 3:
	//	cout << "환타" << endl;
	//	break;
	//default:
	//	cout << "밀키스" << endl;
	//	break;
	//}

	//goto문(잘 안씀)
	//goto Jump;
	//cout << "A 영역" << endl;
	//Jump:
	//cout << "B 영역" << endl;

	// 2.삼항 연산자
	// 조건식 ? 조건식이 참이면 반환 : 조건식이 거짓이면 반환
	int iA = 10, iB = 20, iResult = 0;
	iResult = (iA > iB) ? iA : iB;
	cout << iResult << endl;	
	// 장점은 코드가 간결해진다.
	// 가독성이 좋지 못하다.



	return 0;
}

/*
1코스
 
숙제 1. 성적표 프로그램을 짠 후 평균점수를 가지고 조건문을 통해 A~F학점 분기하기..
90~100 = A
80~89 = B
70~79 = C
60~69 = D
~60 = F


숙제 2. switch문으로도 짜보기

숙제 3. if문을 이용해서 입력받은 정수가 양수인지 음수인지 판별하는 프로그램 작성

숙제 4. 두개의 정수를 순서 상관 없이 입력 받아서 두 수의 차를 출력하는 프로그램 작성
// 단 두 수의 차는 양수가 나와야 된다. (힌트 : if 문을 사용, 큰쪽에서 작은 쪽 빼란 얘기)

숙제 5. 문제 4번을 3항연산자로 해결하시오

문제 1. iNum 부분을 채우시오
int iNum = 0;
cin >> iNum;

switch(iNum / 10)
{
case 0:
	cout << "0이상 10미만" << endl;
	break;
case 1:
	cout << "10이상 20미만" << endl;
	break;
case 2:
	cout << "20이상 30미만" << endl;
	break;
default:
	cout << "30이상" << endl;
	break;
}
*/