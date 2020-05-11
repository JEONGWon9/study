#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	// 0 ~ 32767
	// ## 1.rand() 함수 : 난수를 추출하는 함수. // 시드란걸 참조한다. 값을 변경 안해주면 default 값인 시드 1만 참조한다.

	//srand(2);	//시간이 지남에 따라 계속 바꾸고 싶다.
	srand(unsigned int(time(NULL)));	// 약 1971년1월1일부터 지금까지의 시간을 담고 있다.
										// 이렇게 섞는건 교육용 난수 발생이지 실제로는 안쓰임

	int iA = rand() % 10;
	int iB = rand() % 10;
	int iC = rand() % 10;
	
	cout << iA << endl;
	cout << iB << endl;
	cout << iC << endl;

	system("cls");
	// ## 2.system함수
	int iInput = 0, iSum = 0;

	while (true)
	{
		cin >> iInput;
		if (0 > iInput)
			break;
		iSum += iInput;
		system("pause");
	}
	system("cls");
	cout << "누적 값 : " << iSum << endl;

	return 0;
}

/*
숙제 1. 반복문을 이용한 자판기 프로그램.
1.소지금을 입력받는다.
2.현재 소지금의 보유잔액을 항상 프로그램 상단에 출력.
3.메뉴 출력 : 1,콜라(100원) 2.사이다(200원) 3.코코아(300원) 4.잔돈반환
4.해당 목록 구매시 "해당 물품 구매 완료" 출력 후 보유잔액 차감.
 -단 해당 물품 가격보다 소지금이 부족하면 구매할 수 없다.
 -다음 메뉴를 고를 시에는 이전 출력된 내용을 비워준다.(system함수)if
5.메뉴에서 잔돈반환을 선택하면 "현재 잔돈은 얼마입니다." 출력 후 프로그램 종료.

숙제 2. 홀 짝 게임.
1. 난수 1~10까지 중 하나 뽑아서
2. 메뉴 : 0.홀 1.짝 2.종료 또는 1.홀 2.짝 3.종료
3. 사용자가 홀 또는 짝을 골라서 뽑아놓은 난수가 홀인지 짝인지 맞추는 게임.
4. 총 3라운드를 실시, 마지막 라운드가 끝나면 "몇 승 몇 패" 출력.
 - 매 라운드마다 난수를 새로 뽑는다.
 - 매 라운드마다 정답을 알려준다.

 숙제 3. 가위 바위 보
1. 0 ~ 2 중 난수를 하나 추출.
2. 메뉴 : " 0.가위 1.바위 2.보
3. 사용자가 메뉴를 선택하여 컴퓨터가 뽑은 난수와 비교하여 이겼는지, 비겼는지, 졌는지 판별.
4. 총 3라운드 실시, 마지막 라운드가 끝나면 "몇승 몇무 몇패" 출력
 - 매 라운드마다 난수를 새로 뽑는다.
 - 매 라운드마다 사용자가 고른 것과 컴퓨터가 고른것이 무엇인지 출력.

 숙제 4. 별찍기

 1)
*
**
***
****
*****

2)
*****
 ****
  ***
   **
    *

3)
    *
   **
  ***
 ****
*****

4)

*****
 ****
  ***
   **
    *


5)

    *
   ***
  *****
 *******
*********

6)
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

숙제 5. 구구단 출력 프로그램
입력받은 단 까지 출력하는 프로그램 작성
단 3개 단을 나누어 출력할 것

입력 : 5
2 * 1 = 2   3 * 1 = 3   4 * 1 = 4
2 * 2 = 4   3 * 2 = 6   4 * 2 = 8
.
.
.

2 * 9 = 18  3 * 9 = 27  4 * 9 = 36

5 * 1 = 5   
.
.
.

*/