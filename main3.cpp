#include <iostream>

using namespace std;

int main()
{
	// N ���� 
	//int iDec = 10, iOc = 012, iHex = 0xA;	// 16������ 10~15 A ~ F�� ǥ��
	//cout << iDec << endl;
	//cout << iOc << endl;
	//cout << iHex << endl;


	// ## ��࿬����
	// += -= *= /= %= >>= <<=

	//int iA = 10;
	//iA += 1;		// iA = iA + 1;
	//cout << iA << endl;

	// ## ���������� ++ --
	int iA = 10;
	// ���� ����(��ġ����) : �� ���� �� ����
	++iA;
	cout << ++iA << endl;

	// ���� ����(��ġ����) : �� ���� �� ����
	iA = 10;
	int iTemp = iA++;
	cout << iTemp << endl;
	cout << iA << endl;

	//F9 : ����� ����Ʈ ���� �� ����
	//F5 : ����� ���� ���� or ���� ����� ����Ʈ ���� ��� ����
	//F10 : ����� ���� ó����ġ���� ���� or ���� ����
	//F11 : �Լ� ���η� �İ��
	//Shift + F11 : �Լ� �ٱ����� ����

	// ���� ������ ���� ����
	// �̰� ���߿� ������ �����ε� �ܰ迡�� �˰Ե�

	return 0;
}
