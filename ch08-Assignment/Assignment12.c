/*
	파일명: Assignment12 (난이도: ***)
	내용: 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서 리턴하는 find_all_in_array 함수를
	작성하시오. 이 함수는 찾은 항목의 개수를 리턴한다. 예를 들어 배열에서 12를 2개 찾았으면 2를 리턴하고 찾은 항목의 인덱스는 매개변수인 인덱스
	배열에 저장한다. 항목을 찾을 수 없으면 0을 리턴한다. 
	작성자: 정찬민
	날짜: 2025.9.29
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int* arr, int size, int key, int* indices)
{
	int found_count = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			indices[found_count] = i;
			found_count++;
		}
	}
	return found_count;
}

void Am12()
{
	int array[] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };		// 원본 배열
	int size = sizeof(array) / sizeof(array[0]);
	int found[10];		// 저장할 배열 10으로 하기 
	int find;
	int i;

	printf("원본 배열: ");		// 원본 배열 먼저 출력
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	printf("찾을 값? ");		// 입력 받기 
	scanf("%d", &find);

	int count = find_all_in_array(array, size, find, found);	// 호출하여 키 값을 검색하고, 찾은 개수를 count 변수에 저장

	if (count > 0)				// 1개 이상 찾았을 경우  
	{
		printf("찾은 항목은 모두 %d개입니다.\n", count);
		printf("찾은 항목의 인덱스: ");
		for (i = 0; i < count; i++)	
		{
			printf("%d ", found[i]);
		}
		printf("\n");
	}
	else		// 하나도 못찾았을경우
	{
		printf("찾은 항목은 모두 0개 입니다.\n");
	}
}

int main()
{
	Am12();
	return 0;
}