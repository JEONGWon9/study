#include <iostream>

using namespace std;

// ## 1. ��� �Լ� : �Լ��� ���ο��� �ڱ� �ڽ��� ȣ���ϴ� �Լ�
void Recursive(int n)
{
	if (n <= 0)				// ��� �Լ����� Ż�� ������ �ʼ��̴�.
		return;				// ������ ������ ������ �ݺ��Ǵٰ� ���α׷��� ������ �ȴ�.
							// �Լ��� ȣ��� ������ stack�� ���̴� ������ ���ڶ� �ᱹ stack over flow�� �߻��Ѵ�.
	cout << "��� ȣ��" << endl;
	Recursive(--n);
}

int main()
{
	Recursive(3);


	return 0;
}