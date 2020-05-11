#include <iostream>

using namespace std;

// ## 1.�����͸� ����ϴ� ����
void PlusOne(int a)
{
	++a;
}

// ## 3. PlusOne �����ͷ� �ذ��ϱ�
void PlusOnePointer(int* a)
{
	++(*a);
}

// ## 7.MySwap
void MySwap(int* A, int* B)
{
	//int Temp = *A;
	//*A = *B;
	//*B = Temp;

	*A ^= *B;
	*B ^= *A;
	*A ^= *B;		
}

int main()
{
	//int iA = 10;
	//PlusOne(iA);
	//PlusOne(iA);
	//PlusOne(iA);
	//
	//cout << iA << endl;

	// ## 2. ������ ������ ����� �ʱ�ȭ
	//int iA = 100;
	//cout << &iA << endl;

	// ������ ����
	// �����Ͷ� : �������� �ּҸ� ������ ����
	//int* ptr = &iA;	//����� ���ÿ� �ʱ�ȭ
	//cout << ptr << endl;

	// ������
	//cout << *ptr << endl;

	//*ptr = 300;

	//cout << *ptr << endl;
	//cout << iA << endl;

	//## 3.
	//int iA = 10;
	//PlusOnePointer(&iA);

	//cout << iA << endl;

	// ## 4.�������� �ڷ���
	//float fNum = 3.14f;
	//int* ptr = &fNum;		// �ڷ����� �ٸ� ��� ������ ����
	//float* ptr = &fNum;		// �������� ���

	// ## 5. �߸��� ����
	//int* ptr = 100;		// ������ ����
	//int* ptr2 = nullptr;	// NULL == 0, nullptr == �������� NULL	// �����͸� �ʱ�ȭ �Ҷ��� NULL �ʱ�ȭ �ϴ� ������ ���� ��!
	//if (nullptr != ptr2)
	//	*ptr2 = 100000;

	// ## 6. ������ ������ ũ��
	// win32 ��Ʈ ����̹Ƿ� 4����Ʈ �Ҵ�
	//char* ptr1 = nullptr;
	//short* ptr2 = nullptr;
	//int* ptr3 = nullptr;
	//double* ptr4 = nullptr;
	//
	//cout << sizeof(ptr1) << endl;
	//cout << sizeof(ptr2) << endl;
	//cout << sizeof(ptr3) << endl;
	//cout << sizeof(ptr4) << endl;

	// ## 7. Swap
	//int iA = 10, iB = 20;
	//MySwap(&iA, &iB);
	//cout << "iA : " << iA << ", " << "iB : " << iB << endl;

	// ������ ������ ������ �����̱� ������ ���� �ִ� �����͸� �󸶵��� ���Ҵ��� �����ϴ�.
	//int iA = 100, iB = 200;
	//
	//int* ptr = &iA;
	//ptr = &iB;
	//
	//cout << *ptr << endl;

	// ## 8. const�� �������� ����
	int iA = 10, iB = 20;

	const int* ptr = &iA;

	ptr = &iB;
	*ptr = 30;

	int* const ptr2 = &iA;

	ptr2 = &iB;
	*ptr2 = 30;

	const int* const ptr3 = &iA;
	
	ptr3 = &iB;
	*ptr3 = 30;

	return 0;
}
