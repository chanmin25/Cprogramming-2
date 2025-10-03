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
		if (strcmp(id, user[i].USID) == 0 && strcmp(pw, user[i].USPW) == 0)		// 아이디와 패스워드가 일치하는 경우
		return 1;		// 일치하는것을 찾았으면 성공(1)
	}
	return 0;		// 없으면 실패(0)
}


void Am03()
{
	struct LOGIN user[] = { { "guest", "qwer" } };		// 정보가 저장된 구조체 배열 초기화

	int arr_size = sizeof(user) / sizeof(user[0]);		// 배열 크기 자동으로 계산
	char ID[21];
	char PW[21];

	printf("ID? ");
	scanf("%s", ID);		// %s 로 받을때는 이름만 쓴다

	printf("PW? ");
	scanf("%s", PW);		// %s 로 받을때는 이름만 쓴다

	if (login_check(user, arr_size, ID, PW) == 1)		// login_check 함수를 호출하여 결과 확인
	{
		printf("로그인 성공 \n");
	}
	else
	{
		printf("아이디 또는 패스워드가 틀렸습니다. \n");
	}
}

int main()
{
	Am03();
	return 0;
}