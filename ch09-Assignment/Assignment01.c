/*
	파일명: Assignment01 (난이도: *)
	내용: 한 줄의 문자열을 입력받아서 공백 문자(' ', '\n', '\t', '\f', '\r', '\v')의 개수를 세는 프로그램을 작성하시오. 
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>		// isspace 함수를 사용하기 위해 포함

void Am01()
{
	char str[200];		// 저장할 배열
	int count = 0;		// 공백 문자를 셀 변수
	int i = 0;

	printf("문자열? ");		// 한 줄 입력 받기
	fgets(str, sizeof(str), stdin);		// fgets는 띄어쓰기를 포함한 한 줄 전체를 읽음

	while (str[i] != '\0')
	{
		if (isspace(str[i]))	// str[i] 이 NULL 문자 '\0'를 만날 때까지 반복
		{
			count++;	// 공백 문자가 맞으면 증가
		}
		i++;		// 다음 문자로 이동
	}

	printf("\n공백 문자의 개수: %d\n", count);		// 결과 출력
}

int main()
{
	Am01();
	return 0;
}