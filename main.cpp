#include <iostream>

using namespace std;

// ## 1.포인터를 써야하는 이유
void PlusOne(int a)
{
	++a;
}

// ## 3. PlusOne 포인터로 해결하기
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

	// ## 2. 포인터 변수의 선언과 초기화
	//int iA = 100;
	//cout << &iA << endl;

	// 포인터 변수
	// 포인터란 : 데이터의 주소를 가지는 변수
	//int* ptr = &iA;	//선언과 동시에 초기화
	//cout << ptr << endl;

	// 역참조
	//cout << *ptr << endl;

	//*ptr = 300;

	//cout << *ptr << endl;
	//cout << iA << endl;

	//## 3.
	//int iA = 10;
	//PlusOnePointer(&iA);

	//cout << iA << endl;

	// ## 4.포인터의 자료형
	//float fNum = 3.14f;
	//int* ptr = &fNum;		// 자료형이 다를 경우 컴파일 에러
	//float* ptr = &fNum;		// 정상적인 경우

	// ## 5. 잘못된 참조
	//int* ptr = 100;		// 컴파일 에러
	//int* ptr2 = nullptr;	// NULL == 0, nullptr == 포인터의 NULL	// 포인터를 초기화 할때는 NULL 초기화 하는 습관을 들일 것!
	//if (nullptr != ptr2)
	//	*ptr2 = 100000;

	// ## 6. 포인터 변수의 크기
	// win32 비트 기반이므로 4바이트 할당
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

	// 포인터 변수도 엄연히 변수이기 때문에 갖고 있는 데이터를 얼마든지 재할당이 가능하다.
	//int iA = 100, iB = 200;
	//
	//int* ptr = &iA;
	//ptr = &iB;
	//
	//cout << *ptr << endl;

	// ## 8. const와 포인터의 관계
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
