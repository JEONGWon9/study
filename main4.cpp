#include <iostream>

using namespace std;

int main()
{
	// ## �б⹮(������ ���ؼ� ������) ���� ������ ���ؼ� �ڵ��� �帧�� ������.(�ٸ����� ���ǹ�)
	// ���Ǳ⿡�� �ݶ� ������ �ݶ� ���´�.
	// if�� switch�� goto��(����)

	//if (/*���ǽ�*/)
	//{
	//	// ���ǽ��� �����ϸ� ����Ǵ� �ڵ���
	//}
	//int iA = 10, iB = 20;

	//if (iA > iB)
	//{
	//	cout << "iA�� ũ��." << endl;
	//}
	//else // ����
	//{
	//	cout << "iB�� ũ��." << endl;
	//}

	//int iSelect = 0;
	//cin >> iSelect;

	//if (1 == iSelect)
	//{
	//	cout << "�ݶ�" << endl;
	//}
	//else if (2 == iSelect)
	//{
	//	cout << "ȯŸ" << endl;
	//}
	//else if (3 == iSelect)
	//{
	//	cout << "���̴�" << endl;
	//}
	//else
	//{
	//	cout << "��Ÿ" << endl;
	//}

	//{} �� �ǹ� : ������ �ǹ� �Ǵ� ������ ���Ѵ�.

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
	//cout << iNum3 << endl;		// main�Լ� ���忡���� iNum3�� ���縦 ���� ���Ѵ�.

	
	//if (true)
	//	cout << "���� ���ǹ�, �ݺ����� {} �� ���� ����" << endl;


	//// switch��(��� ���ǹ�)
	//switch (/*���� ����*/)	// �Ǽ��� �� �� ����.
	//{
	//case /*��� �б�(��������)*/:
	//	//�ش� ��� �б⹮�� �ش��ϸ� ����Ǵ� �ڵ� ����
	//	break;
	//default:	// �ƹ� ��쿡�� �ش���� �ʾ��� ���
	//	break;	// switch�� Ż�� Ȥ�� ���� ����� �ݺ��� �Ѱ��� Ż��
	//}

	//int iSelect = 0;
	//cin >> iSelect;
	//switch (iSelect)
	//{
	//case 1:
	//	cout << "�ݶ�" << endl;
	//	break;
	//case 2:
	//	cout << "���̴�" << endl;
	//case 3:
	//	cout << "ȯŸ" << endl;
	//	break;
	//default:
	//	cout << "��Ű��" << endl;
	//	break;
	//}

	//goto��(�� �Ⱦ�)
	//goto Jump;
	//cout << "A ����" << endl;
	//Jump:
	//cout << "B ����" << endl;

	// 2.���� ������
	// ���ǽ� ? ���ǽ��� ���̸� ��ȯ : ���ǽ��� �����̸� ��ȯ
	int iA = 10, iB = 20, iResult = 0;
	iResult = (iA > iB) ? iA : iB;
	cout << iResult << endl;	
	// ������ �ڵ尡 ����������.
	// �������� ���� ���ϴ�.



	return 0;
}

/*
1�ڽ�
 
���� 1. ����ǥ ���α׷��� § �� ��������� ������ ���ǹ��� ���� A~F���� �б��ϱ�..
90~100 = A
80~89 = B
70~79 = C
60~69 = D
~60 = F


���� 2. switch�����ε� ¥����

���� 3. if���� �̿��ؼ� �Է¹��� ������ ������� �������� �Ǻ��ϴ� ���α׷� �ۼ�

���� 4. �ΰ��� ������ ���� ��� ���� �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷� �ۼ�
// �� �� ���� ���� ����� ���;� �ȴ�. (��Ʈ : if ���� ���, ū�ʿ��� ���� �� ���� ���)

���� 5. ���� 4���� 3�׿����ڷ� �ذ��Ͻÿ�

���� 1. iNum �κ��� ä��ÿ�
int iNum = 0;
cin >> iNum;

switch(iNum / 10)
{
case 0:
	cout << "0�̻� 10�̸�" << endl;
	break;
case 1:
	cout << "10�̻� 20�̸�" << endl;
	break;
case 2:
	cout << "20�̻� 30�̸�" << endl;
	break;
default:
	cout << "30�̻�" << endl;
	break;
}
*/