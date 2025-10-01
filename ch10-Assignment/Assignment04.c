/*
	파일명: Assignment04 (난이도: *)
	내용: 연월일을 나타내는 DATE 구조체와 DATE 구조체를 매개변수로 전달받아 날짜를 "2022/1/1"처럼 출력하는 print_date 함수를 정의하시오.
	DATE 구조체와 print_date 함수를 이용해서 입력받은 날짜를 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.10.01
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment04.h"

void Am04()
{
	struct DATE today;

	printf("연? ");
	scanf("%d", &today.year);

	printf("월? ");
	scanf("%d", &today.mon);

	printf("일? ");
	scanf("%d", &today.day);

	print_date(today);
	printf("\n");
}

void print_date(struct DATE d) {
	printf("%d/ %d/ %d", d.year, d.mon, d.day);
}

int main()
{
	Am04();
	return 0;
}