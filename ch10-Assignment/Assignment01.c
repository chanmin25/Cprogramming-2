/*
	파일명: Assignment01 (난이도: *)
	내용: 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오. 아이디와 패스워드는 각각 최대 
	20글자까지 입력할 수 있다. LOGIN 구조체의 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오. 
	패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.
	작성자: 정찬민
	날짜: 2025.10.01
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Assignment01.h"

void Am01()
{
	struct LOGIN user1;		// 변수 선언
	int i;

	printf("ID? ");
	scanf("%s", &user1.USID);

	printf("Password? ");
	scanf("%s", &user1.USPW);

	printf("ID: %s\n", user1.USID);

	printf("PW: ");
	int PW_len = strlen(user1.USPW);	// 실제 길이를 구함
	for (i = 0; i < PW_len; i++)		// 패스워드 길이만큼 반복하면서 * 출력
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	Am01();
	return 0;
}