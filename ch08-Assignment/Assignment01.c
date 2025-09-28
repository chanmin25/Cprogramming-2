/*
	파일명: Assignment01 (난이도: *)
	내용: 크기가 3인 double형 배열의 모든 원소릐 주소를 출력하는 프로그램을 작성하시오. 단, 주소 구하기 연산자를 사용하지 마시오.
	작성자: 정찬민
	날짜: 2025.9.28
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am01()
{
	double arr[3] = { 0.0 };		// 선언 및 초기화
	int i;

	for (i = 0; i < 3; i++)			// 반복문 사용해서 각 원소의 주소 출력
	{
		printf("x[%d]의 주소: %p\n", i, arr + i);		
	}
}

int main()
{
	Am01();
	return 0;
}