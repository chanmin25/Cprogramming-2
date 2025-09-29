/*
	파일명: Assignment11 (난이도: ***)
	내용: 직사각형의 넓이와 둘레를 구하는 get_rect_info 함수를 작성하시오. 직사각형의 가로, 세로의 길이를 입력받은 다음 get_rect_info
	함수를 이용해서 직사각형의 넓이와 둘레를 구해서 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.9.29
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(double wi, double he, double* area, double* peri)	// 계산하는 함수
{
	*area = wi * he;
	*peri = 2 * (wi + he);
}

void Am11()
{
	double w, h;
	double a = 0.0, p = 0.0;

	printf("가로? ");		// 가로 입력받기
	scanf("%lf", &w);

	printf("세로? ");		// 세로 입력받기
	scanf("%lf", &h);

	get_rect_info(w, h, &a, &p);		// 호출하여 a와 p 변수에 결과 계산

	printf("넓이: %.2lf, 둘레: %.2lf\n", a, p);		// 출력
}

int main()
{
	Am11();
	return 0;
}