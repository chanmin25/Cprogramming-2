/*
	파일명: Assignment08 (난이도: **)
	내용: 정수형 배열을 특정 값으로 채우는 fill_array 함수를 작성하시오. 단, 초인터와 포인터 역참조 연산자를 이용한다. fii_array 함수를
	이용해서 크기가 20인 int 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.9.28
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int* arr, int size, int value)		// Am08보다 먼저정의 
{
	int i;
	for (i = 0; i < size; i++)
	{									// 포인터 연산과 역참조 연산자를 사용하여 값 할당
		*(arr + i) = value;				// arr[i] = value; 와 동일한 의미
	}
}

void Am08()
{
	int array[20];			// 크기가 20인 int 배열 선언 
	int fill_val;	
	int i;

	printf("배열의 원소에 저장할 값? ");	// 채울 값을 받음
	scanf("%d", &fill_val);

	fill_array(array, 20, fill_val);		// 함수 호출하여 배열 채움

	printf("배열: ");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", array[i]);			// 출력
	}
}

int main()
{
	Am08();
	return 0;
}