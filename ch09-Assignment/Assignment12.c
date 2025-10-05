/*
	파일명: Assignment12 (난이도: ***)
	내용: 입력받은 문자열에 대하여 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전(rotate)한 결과를 출력하는 프로그램을 작성하시오.
	예를 들어 "abcdef"를 오른쪽으로 2글자 회전하면 "efabcd"가 된다. 이동할 글자 수가 음수면 왼쪽으로, 양수면 오른쪽으로 이동한다. 
	이동할 글자수로 0이 입력되면 프로그램을 종료한다.
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>     // strlen, strcpy, strncpy, strncat 함수 사용

void rotate_string(char* str, int n) 
{
    int len = strlen(str);

    if (len <= 1)    // 문자열 길이가 0 또는 1이면 회전 의미가 없으므로 함수 종료
    {
        return;
    }

    int k = n % len;    // 실제 이동할 거리(k) 계산
    if (k < 0) {
        k = k + len;
    }

    if (k == 0)         // 회전할 필요가 없으면 함수 종료
    {
        return;
    }

    char temp[256];     // 임시 저장 공간(버퍼) 생성

    // 문자열 재조립
    strncpy(temp, str + len - k, k);
    temp[k] = '\0';     // strncpy는 NULL 문자를 보장하지 않으므로 직접 추가

    strncat(temp, str, len - k);

    strcpy(str, temp);     //완성된 임시 버퍼의 내용을 원본 문자열로 복사
}

void Am12() 
{
    char text[256];
    int shift_amount;

    printf("문자열? ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';           // fgets로 인해 생긴 끝부분의 \n(개행 문자) 제거

    while (1)    // 이동할 글자 수로 0이 입력될 때까지 무한 반복 
    {
        printf("\n이동할 글자 수(0 입력 시 종료): ");
        scanf("%d", &shift_amount);

        if (shift_amount == 0)      // 0 입력 시 종료
        {
            break;
        }

        rotate_string(text, shift_amount);      // 함수 호출하여 회전

        printf("결과: %s\n", text);
    }

    printf("\n프로그램을 종료합니다.\n");
}

int main()
{
    Am12();
    return 0;
}