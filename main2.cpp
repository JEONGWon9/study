#include <iostream>

using namespace std;

void Func(int** ptr, int* b)
{
	*ptr = b;
}

int main()
{
	// ## 9. ���������� // �����Ϳ� �ִ� ������ �ٲٰ��� �� ��
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

// ���Ǳ�
// ������ �Է� �Լ� ���� ����
// �޴��� ���úκ� �Լ� ���� ����
// �ݾ� �� �� ���� �Լ� ���� ����
// �����͸� ��� �����


//void InputCash(int* pCash);
//void VendingMachine(int* pCash);
//void ShowMenu(int* pSelect, int* pCash);
//bool CompareCash(int iGoods, int* pCash);