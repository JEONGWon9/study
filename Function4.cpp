#include <iostream>

using namespace std;

// ## 1.�Լ� �����ε� : C++ �Լ� ����
// ���� �̸��� �Լ��� ������ ���� Ÿ�԰� ������ ���� ������ �ϴ� �����̴�.
// ��ȯ Ÿ�Կ� ���� �����Ǵ� ����.

int Add(int a, int b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

float Add(float a, float b)
{
	return a + b;
}

//float Add(float a, float b)		// ��ȯ Ÿ�Կ� ���� �����Ǵ� ����. ������ ����!
//{
//	return a + b;
//}

void Add(void)
{
	cout << "void" << endl;
}

int main()
{
	cout << Add(10, 20) << endl;
	cout << Add(10.f, 20.f) << endl;

	return 0;
}

// ���Ǳ⸦ �Լ��� ����� ������� ����� ���ÿ�
