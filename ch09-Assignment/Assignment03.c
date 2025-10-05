/*
	파일명: Assignment03 (난이도: *)
	내용: 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램을 작성하시오. 
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void Am03()
{
	char str[200];		// 문자열을 저장할 배열
	int i = 0;

	printf("문자열? ");	// 한줄 입력 받음
	fgets(str, sizeof(str), stdin);

	while(str[i] != '\0')		// 문자열을 처음부터 끝까지 순회
	{
		char ch = str[i];		// 현재 문자를 확인하기 위해 변수에 저장

		if (islower(ch))		// 소문자인지 확인
		{
			str[i] = toupper(ch);	// 소문자이면 대문자로 변환하여 원래 위치에 저장
		}
		else if (isupper(ch))	// 대문자인지 확인
		{
			str[i] = tolower(ch);	// 대문자이면 소문자로 변환하여 원래 위치에 저장
		}
		i++;
	}

	printf("변환 후: %s", str);
}

int main()
{
	Am03();
	return 0;
}