/* 
	파일명: Assignment02 (난이도: *)
	내용: 등비수열은 앞의 항에 항상 일정한 수(공비)를 곱하여 만들어가는 수열이다. 크기가 10인 실수형 배열에 대하여 등차수열로 값을
	채우려고 한다. 첫 번째 항의 값과 공비를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.9.23
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am02()
{
	int i;						// 선언
	double arr[10];
	double first, common;

	printf("첫 번째 항? ");		// 입력받기
	scanf("%lf", &first);

	printf("공비? ");
	scanf("%lf", &common);

	arr[0] = first;			// 첫 번째 항은 바로 대입
	for (i = 1; i < 10; i++)	// 베열에 값 채우기
	{
		arr[i] = arr[i - 1] * common;
	}

	for (i = 0; i < 10; i++)	// 배열 출력하기
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}

int main()
{
	Am02();
	return 0;
}