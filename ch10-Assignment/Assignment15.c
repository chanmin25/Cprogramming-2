/*
	파일명: Assignment15 (난이도: ***)
	내용: 점의 좌표를 나타내는 POINT 구조체에 대해서 두 점의 좌표를 맞바꾸는 swap_point 함수를 정의하시오. 크기가 10인 POINT 구조체
	배열에 대하여 x좌표를 기준으로 선택 정렬하는 프로그램을 작성하시오. POINT 구조체 배열의 조기값은 마음대로 정한다.
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment15.h"

void swap_point(struct POINT* p1, struct POINT* p2)		// 두 POINT 구조체의 값을 교환하는 함수
{
	struct POINT temp = *p1;		// temp에 p1이 가리키는 값을 저장
	*p1 = *p2;						// p1이 가리키는 곳에 p2의 값을 저장
	*p2 = temp;						// p2가 가리키는 곳에 temp의 값을 저장
}

void print_points(struct POINT arr[], int size)			// 배열의 모든 좌표를 출력하는 함수
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("(%d, %d) ", arr[i].x, arr[i].y);
		if ((i + 1) % 5 == 0)		// 5개씩 추력하고 줄바꿈
		{
			printf("\n");
		}
	}
}


void Am15()
{									// 크기가 10인 POINT 구조체 배열을 입의의 값으로 초기화 
	struct POINT points[10] =
	{
		{7, 3}, {12, 93}, {22, 31}, {1, 20}, {34, 53}, {41, 2}, {32, 9}, {21, 31}, {8, 2}, {3, 5}
	};
	int size = 10;
	int i, j, min_idx;

	printf("<<정렬 전>>\n");		// 정렬 전 배열 출력
	print_points(points, size);

	for (i = 0; i < size; i++)		// x좌표를 기준으로 선택 정렬 수행
	{
		min_idx = i;				// 현재 정렬되지 않은 부분의 첫 번쨰 원소를 최솟값으로 가정

		for (j = i + 1; j < size; j++)		// i + 1번째 원소부터 끝까지 탐색하며 실제 최솟값을 찾음
		{
			if (points[j].x < points[min_idx].x)	// 현재까지의 최솟값(point[min_idx].x)보다 더 작은 x값을 찾으면 
			{
				min_idx = j;		// 최솟값의 인덱스를 갱신 
			}
		}
		swap_point(&points[i], &points[min_idx]);	// 최솟값을 찾았으면, 현재 위치 (i)의 원소와 교환
	}
	
	printf("<<정렬 후>>\n");		// 정렬 후 배열 출력
	print_points(points, size);
}

int main()
{
	Am15();
	return 0;
}