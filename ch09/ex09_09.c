// 문자열 포인터가 문자 배열을 가리키는 경우

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>				// 문자 처리 라이브러리

int main(void)
{
	char str[64] = "";
	char* p = str;				// p는 str 배열을 가리킨다.

	strcpy(p, "test string");	// p가 가리키느 문자 배열을 변경한다.

	if (islower(p[0]))			// 단어의 첫 글자를 대문자로 바꾼다.
		p[0] = toupper(p[0]);	// p가 가리키는 str[0]을 변경한다.

	p = strchr(p, ' ');			// str중 ' ' 문자의 주소를 포인터p에 저장한다.

	if (islower(p[1]))
		p[1] = toupper(p[1]);	// ' ' 다음 문자를 대문자로 바꾼다.
	puts(str);
	return 0;
}