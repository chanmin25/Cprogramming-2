/*
	파일명: Assignment03 (난이도: **)
	내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오. 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음
	입력받은 패스워드와 등록된 패스워드를 비교래서 같으면 "로그인 성공"이라고 출력한다. LOGIN 구조체 배열은 크기가 5인 배열로
	선언하고 적당한 값으로 초기화해서 사용한다. 
	작성자: 정찬민
	날짜: 2025.10.01
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Assignment03.h"

int login_check(struct LOGIN user[], int size, char* id, char* pw)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (strcmp)
	}
}


void Am03()
{
	struct LOGIN good;

	printf("ID? ");
	scanf("%d", &good.USID);

	printf("PW? ");
	scanf("%d", &good.USPW);



}

int main()
{
	Am03();
	return 0;
}