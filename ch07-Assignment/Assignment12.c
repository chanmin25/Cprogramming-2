/*
	파일명: Assignment12 (난이도: ***)
	 내용: 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자. 예매할 좌석수를 입력받아 빈자리를
	 할당한다. 예매할 때마다 각 좌석의 상태를 출력한다. 0이면 예매 가능 X는 예매불가를 의미한다. 더 이상 예매랗 수 없으면 프로그램을 종료한다.
	 작성자: 정찬민
	 날짜: 2025.9.27
	 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am12()
{
	int seats[10] = { 0 };
	int count = 0;
	int i;

	while (count < 10)			// 모든 좌석이 예매될 때까지 반복
	{
		printf("현재 좌석: [ ");	// 현재 좌석 상태 출력
		for (i = 0; i < 10; i++)
		{
			printf("%d ", seats[i]);
		}
		printf("]\n");

		int num;			// 예매할 좌석수 입력
		printf("예매할 좌석수? ");
		scanf("%d", &num);

		if (num <= 0 || num > (10 - count))		// 부족하거나 잘못된 것 (||: OR)
		{
			printf("=> 좌석이 부족하거나 잘못된 입력입니다.\n\n");
			continue;
		}

		int assigned = 0;		// 빈 좌석 찾아 예매하고 결과 출력 
		for (i = 0; i < 10 && assigned < num; i++)	// (&&: AND)
		{
			if (seats[i] == 0)	// 0을 찾으면 1로 변경하여 예매 처리
			{
				seats[i] = 1;

				printf("%d번 좌석을 예매하였습니다. \n", i + 1);	// 예매 좌석 번호 출력

				assigned++;
				count++;
			}
		}
		printf("\n");		// 다음 예매 위해 한 줄 띄우고
	}
	
	printf("현재 좌석: [ ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", seats[i]);
	}
	printf("]\n");
	printf("=> 모든 좌석의 예매가 완료되었습니다. \n");	// 모든 좌석이 완료상태
}

int main()
{
	Am12();
	return 0;
}