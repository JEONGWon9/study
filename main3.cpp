#include <iostream>

using namespace std;

int main()
{
	// N 진수 
	//int iDec = 10, iOc = 012, iHex = 0xA;	// 16진수는 10~15 A ~ F로 표현
	//cout << iDec << endl;
	//cout << iOc << endl;
	//cout << iHex << endl;


	// ## 축약연산자
	// += -= *= /= %= >>= <<=

	//int iA = 10;
	//iA += 1;		// iA = iA + 1;
	//cout << iA << endl;

	// ## 증감연산자 ++ --
	int iA = 10;
	// 전위 연산(전치연산) : 선 증감 후 연산
	++iA;
	cout << ++iA << endl;

	// 후위 연산(후치연산) : 선 연산 후 증감
	iA = 10;
	int iTemp = iA++;
	cout << iTemp << endl;
	cout << iA << endl;

	//F9 : 디버깅 포인트 생성 및 삭제
	//F5 : 디버깅 모드로 실행 or 다음 디버깅 포인트 까지 계속 실행
	//F10 : 디버깅 모드로 처음위치부터 실행 or 한줄 실행
	//F11 : 함수 내부로 파고듬
	//Shift + F11 : 함수 바깥으로 나감

	// 전위 연산이 좀더 빠름
	// 이건 나중에 연산자 오버로딩 단계에서 알게됨

	return 0;
}
