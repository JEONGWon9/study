#include <iostream>

using namespace std;

//�Լ��� �Լ��� ���������� ���ؼ� �Լ��� ����ο� ���Ǻθ� ������ �ȴ�.

// ##1.�Լ��� �����: ������ �޴����̶� ��������!
int Add(int a, int b);
int Min(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

int main(void)
{
	cout << Add(4, 2) << endl;
	cout << Min(4, 2) << endl;
	cout << Mul(4, 2) << endl;
	cout << Div(4, 2) << endl;

	return 0;
}


// ##2. �Լ��� ���Ǻ�
int Add(int a, int b)
{
	return a + b;
}

int Min(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}