/*
	파일명: Assignment09 (난이도: **)
	내용: 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 fill_2d_array 함수를 작성하시오. 함수의 매개변수로 배열 전체에
	대한 포인터와 배열의 행 크기를 전달한다. 열 크기가 5, 행 크기가 4인 2차원 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.9.28
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_2d_array(int arr[][5], int size, int value)		// 열의 크기가 5인 2차원 배열을 채우는 함수
{
	int i, j;
	for (i = 0; i < size; i++)			// 행 반복 (0 ~ size-1)
	{
		for (j = 0; j < 5; j++)			// 열 반복 (0 ~ 4)
		{
			arr[i][j] = value;
		}
	}
}

void Am09()
{
	int my_array[4][5];			// 행 크기가 4, 열 크기가 5인 2차원 배열 선언
	int fill_value;
	int i, j;

	printf("배열의원소에 저장할 값? ");		// 입력 받음
	scanf("%d", &fill_value);

	fill_2d_array(my_array, 4, fill_value);	// 함수 호출하여 배열 채움
			// 배열 이름, 행 크기(4), 채울 값 전달
	for (i = 0; i < 4; i++)		// 행 반복
	{
		for (j = 0; j < 5; j++)	// 열 반복
		{
			printf("%2d ", my_array[i][j]);
		}
		printf("\n");	// 한 행 출력 끝나면 줄 바꿈
	}
}

int main()
{
	Am09();
	return 0;
}