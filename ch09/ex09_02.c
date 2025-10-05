// strlen 함수의 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// 문자열 처리 함수 사용 시 포함

int main(void)
{
	char s1[] = "hello";
	char s2[] = "";	// 널 문자열 
	int len = 0;

	printf("s1의 길이: %d\n", strlen(s1));	// 널 문자를 제외한 문자열의 길이
	printf("s2의 길이: %d\n", strlen(""));	// 널 문자열의 길이
	printf("길이: %d\n", strlen("bye bye"));// 문자열 리터럴의 길이
	printf("s1의 크기: %d\n", sizeof(s1));; // 문자 배열의 바이트 크기

	len = strlen(s1);
	if (len > 0)
		s1[len - 1] = '\0';		// 마지막 한 글자를 삭제한다
	printf("s1 = %s\n", s1);

	return 0;
}
