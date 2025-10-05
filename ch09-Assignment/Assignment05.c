/*
	파일명: Assignment05 (난이도: **)
	내용: 대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic 함수를 작성하시오. strcmp_ic(lhs, rhs) 함수의 리턴값은 strcmp와
	마찬가지로 lhs가 rhs보다 크면 0보다 큰 값, 두 문자열이 같으면 0, lhs가 rhs보다 작으면 0보다 작은 값을 리턴한다. strcmp_ic
	함수를 이용해서 입력받은 두 문자열을 비교하는 프로그램을 작성하시오.
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp_ic(const char* lhs, const char* rhs)		// 대소문자 구분 없는 문자열 비교 함수
{
	while (tolower(*lhs) == tolower(*rhs))
	{
		if (*lhs == '\0')
		{
			return 0;
		}
		lhs++;
		rhs++;
	}
	return tolower(*lhs) - tolower(*rhs);
}

void Am05()
{
	char str1[100];
	char str2[100];

	printf("첫 번째 문자열? ");
	fgets(str1, sizeof(str1), stdin);		// fgets로 한줄 읽음

	printf("두 번째 문자열? ");
	fgets(str2, sizeof(str2), stdin);

	size_t len1 = strlen(str1);			// fgets로 인해 생긴 \n 문자 제거
	if (len1 > 0 && str1[len1 - 1] == '\n')		// 마지막이 \n이면 \0으로 바꿔줌
	{
		str1[len1 - 1] = '\0';
	}

	size_t len2 = strlen(str2);			// size_t는 크기를 나타내는 타입
	if (len2 > 0 && str2[len2 - 1] == '\n')
	{
		str2[len2 - 1] = '\0';
	}

	int result = strcmp_ic(str1, str2);	// 호출하여 저장

	if (result == 0)		// 결과값에 따른 메시지 출력
	{
		printf("%s와 %s가 같습니다.\n", str1, str2);
	}
	else if (result > 0)
	{
		printf("%s가 %s보다 큽니다.\n", str1, str2);
	}
	else
	{
		printf("%s가 %s보다 작습니다.\n", str1, str2);
	}
}

int main()
{
	Am05();
	return 0;
}