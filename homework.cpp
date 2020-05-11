#include <iostream>

using namespace std;

int main()
{
	int Kor = 0, Eng = 0, Math = 0, Total = 0;
	float fAver = 0;

	cout << "국어 점수 : ";
	cin >> Kor;
	cout << "영어 점수 : ";
	cin >> Eng;
	cout << "수학 점수 : ";
	cin >> Math;

	Total = Kor + Eng + Math;
	fAver = Total / 3.f;

	cout << "국어 점수는 " << Kor << "입니다." << endl;
	cout << "영어 점수는 " << Eng << "입니다." << endl;
	cout << "수학 점수는 " << Math << "입니다." << endl;
	cout << "총점은 "	  << Total << "입니다." << endl;
	cout << "평균은 "	  << fAver << "입니다." << endl;

	return 0;
}