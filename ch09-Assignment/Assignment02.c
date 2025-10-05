/*
	파일명: Assignment02 (난이도: **)
	내용: 문자 배열을 매개변수로 전달받아 공백 문자(' ', '\n', '\t', '\f', '\r', '\v')를 모두 제거하는 remove_space 함수를 작성하시오. remove_space
	함수를 이용해서 입력받은 문자열에서 빈칸을 모두 제거하고 출력하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRTSECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void remove_space(char* str)
{
	int read = 0;		// 읽어나갈 인덱스
	int write = 0;		// 공백이 아닌 문자만 새로 쓸 인덱스

	while (str[read] != '\0')	// \0 만날 때까지 반복
	{
		if (!isspace(str[read]))	// 공백문자가 아니라면 
		{
			str[write] = str[read];	// 해당 문자를 복사
			write++;		// 다음 위치로 이동
		}
		read++;		// 읽기 위해 이동
	}
	str[write] = '\0';	// 끝을 알리는 NULL 문자 추가
}

void Am02()
{
	char bu[200];

	printf("문자열? ");		// 입력받기
	fgets(bu, sizeof(bu), stdin);

	remove_space(bu);		// 함수 호출하여 공백 제거

	printf("공백 문자 제거후: %s", bu);		// 출력
}

int main()
{
	Am02();
	return 0;
}