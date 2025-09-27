/*
	파일명: Assignment18 (난이도: ***)
	 내용: 수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다. 최대 10개의 정수형 원소를 저장할 수 있는
	 집합(set)을 구현하시오. 정수를 입력받아 집합의 원소로 추가하고, 그 때마다 집합의 원소들을 출력하시오. 
	 작성자: 정찬민
	 날짜: 2025.9.27
	 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am18()
{
	int set[10];
	int count = 0;
	int num;
	int i;

	while (count < 10)
	{
		printf("배열에 추가할 원소? ");
		scanf("%d", &num);
		
		int duplication = -1;			// 중복 검사 , -1은 중복을 찾지 못함을 의미 
		for (i = 0; i < count; i++)
		{
			if (set[i] == num)
			{
				duplication = i;		// 중복을 찾으면 해당 인덱스를 저장
				break;
			}
		}

		if (duplication != -1)			// -1이 아니면 (중복을 찾았다면)
		{
			printf("해당 원소는 이미 [%d]에 존재합니다.\n", num, duplication);
		}
		else	// 중복이 아니라면
		{
			set[count] = num;
			count++;
		}

		printf("SET = { ");		// 현재 집합 상태 출력
		for (i = 0; i < count; i++)
		{
			printf("%d", set[i]);

			if (i < count - 1)
			{
				printf(", ");
			}
		}

		printf(" } \n\n");
	}
	printf("집합이 가득 찼습니다. 프로그램을 종료합니다.\n");
}

int main()
{
	Am18();
	return 0;
}