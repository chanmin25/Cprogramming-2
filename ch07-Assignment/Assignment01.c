/* 
	파일명: Assignment01 (난이도: *)
	내용: 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다. 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
	첫번쨰 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.9.23
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am01()
{
	int arr[10];			// 선언
	int first, common;
	int i;

	printf("첫 번째 항? ");		// 입력받기
	scanf("%d", &first);

	printf("공차? ");
	scanf("%d", &common);

	for (i = 0; i < 10; i++)	// 배열에 값 채우기
	{
		arr[i] = first + (i * common);
	}

	for (i = 0; i < 10; i++)	// 배열 출력하기
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	Am01();
	return 0;
}