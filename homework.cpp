#include <iostream>

using namespace std;

int main()
{
	int Kor = 0, Eng = 0, Math = 0, Total = 0;
	float fAver = 0;

	cout << "���� ���� : ";
	cin >> Kor;
	cout << "���� ���� : ";
	cin >> Eng;
	cout << "���� ���� : ";
	cin >> Math;

	Total = Kor + Eng + Math;
	fAver = Total / 3.f;

	cout << "���� ������ " << Kor << "�Դϴ�." << endl;
	cout << "���� ������ " << Eng << "�Դϴ�." << endl;
	cout << "���� ������ " << Math << "�Դϴ�." << endl;
	cout << "������ "	  << Total << "�Դϴ�." << endl;
	cout << "����� "	  << fAver << "�Դϴ�." << endl;

	return 0;
}