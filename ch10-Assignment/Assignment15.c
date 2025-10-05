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

void swap_point(struct POINT* p1, struct POINT* p2)
{
	struct POINT temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void print_points(struct POINT arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("(%d, %d) ", arr[i].x, arr[i].y);
		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}
}


void Am15()
{
	struct POINT points[10] =
	{
		{7, 3}, {12, 93}, {22, 31}, {1, 20}, {34, 53}, {41, 2}, {32, 9}, {21, 31}, {8, 2}, {3, 5}
	};
	int size = 10;
	int i, j, min_idx;

	printf("<<정렬 전>>\n");
	print_points(points, size);

	for (i = 0; i < size; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (points[j].x < points[min_idx].x)
			{
				min_idx = j;
			}
		}
		swap_point(&points[i], &points[min_idx]);
	}
	
	printf("<<정렬 후>>\n");
	print_points(points, size);
}

int main()
{
	Am15();
	return 0;
}