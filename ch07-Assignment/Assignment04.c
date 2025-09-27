/*
	파일명: Assignment04 (난이도: **)
	내용: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께 
	출력하는 프로그램을 작성하시오. 배열의 초기값은 마음대로 정하시오
	작성자: 정찬민
	날짜: 2025.9.27
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am04()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };	// 임의 초기화
	int max_val, min_val;
	int max_idx, min_idx;
	int i;
	
	max_val = arr[0];		// 첫 번쨰 원소를 기준으로 초기화 설정
	min_val = arr[0];
	max_idx = 0;
	min_idx = 0;

	for (i = 1; i < 10; i++)	// 최댓값, 최솟값 찾기	arr[0]은 초기값으로 사용함 arr[1]부터 시작
	{							
		if (arr[i] > max_val)
		{
			max_val = arr[i];	// 최댓값을 새로운 값으로 교체
			max_idx = i;		// 최댓값 인덱스를 현재 인덱스로 교체
		}
		if (arr[i] < min_val)	// 최솟값도 같은 방식
		{
			min_val = arr[i];
			min_idx = i;
		}
	}

	printf("배열: ");		// 결과 출력
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");

	printf("최댓값: %d, 인덱스=%d\n", max_val, max_idx);
	printf("최솟값: %d, 인덱스=%d\n", min_val, min_idx);
}

int main()
{
	Am04();
	return 0;
}