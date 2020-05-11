#include <iostream>

using namespace std;

void Func(int** ptr, int* b)
{
	*ptr = b;
}

int main()
{
	// ## 9. 이중포인터 // 포인터에 있는 변수를 바꾸고자 할 때
	int iA = 10, iB = 20;
	int* ptr = &iA;
	Func(&ptr, &iB);
	cout << iA << endl;
	cout << iB << endl;
	cout << *ptr << endl;

	int iNum = 100;
	int* pNum = &iNum;
	int** ppNum = &pNum;
	int*** pppNum = &ppNum;
	int**** ppppNum = &pppNum;

	cout << iNum << endl;
	cout << *pNum << endl;
	cout << **ppNum << endl;
	cout << ***pppNum << endl;
	cout << ****ppppNum << endl;

	return 0;
}

// 자판기
// 소지금 입력 함수 따로 구현
// 메뉴판 선택부분 함수 따로 구현
// 금액 비교 및 차감 함수 따로 구현
// 포인터를 섞어서 만들기


//void InputCash(int* pCash);
//void VendingMachine(int* pCash);
//void ShowMenu(int* pSelect, int* pCash);
//bool CompareCash(int iGoods, int* pCash);