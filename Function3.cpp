#include <iostream>

using namespace std;

// ## 1. ����Ʈ �Ű����� : C++�� �Լ� ����
// �Լ��� ����ο��� default ������ ���� �־��ָ� �ȴ�.
// �� ������������ ä�������� ��Ģ�� �ִ�.
int Add(int a, int b, int c = 0);

int main(void)
{
	cout << Add(10, 20) << endl;
	cout << Add(10, 20, 30) << endl;
	return 0;
}

int Add(int a, int b, int c)	// ����ο��� �ʱ�ȭ�� ������ ���Ǻο��� �ʱ�ȭ�� �� �ʿ䰡 ����.
{
	return a + b + c;
}