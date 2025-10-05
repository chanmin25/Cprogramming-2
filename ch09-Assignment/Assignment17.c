/*
	파일명: Assignment17 (난이도: ***)
	내용: 입력받은 노래 제목을 최대 20개 저장하고 관리하는 프로그램을 작성하시오. 노래 제목의 길이는 퇴대 40글자라고 가정한다. 간단한 메뉴로
	노래 제목을 추가하는 기능, 노래 제목으 수정하는 기능, 노래 목록을 출력하는 기능을 처리한다.
	작성자: 정찬민
	날짜: 2025.10.05
	버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_SONG 20
#define MAX_TITLE 41

 // 함수 원형 선언
void display_menu();
void add_song(char playlist[][MAX_TITLE], int* count);
void edit_song(char playlist[][MAX_TITLE], int count);
void view_playlist(char playlist[][MAX_TITLE], int count);
void clear_input_buffer();


void Am17()
{
    char playlist[MAX_SONG][MAX_TITLE] = { 0 };    // 2차원 배열을 이용해 여러 개의 문자열(노래 제목)을 저장
    int song_count = 0;
    int choice;

    while (1)
    {
        display_menu();
        scanf("%d", &choice);

        clear_input_buffer();           // scanf는 버퍼에 엔터키(\n)를 남겨둠.

        switch (choice)
        {
        case 1:
            add_song(playlist, &song_count);    // main의 song_count 값을 직접 바꾸기 위해 주소(&)를 전달
            break;
        case 2:
            edit_song(playlist, song_count);
            break;
        case 3:
            view_playlist(playlist, song_count);
            break;
        case 0:
            printf("프로그램을 종료합니다.\n");
            return;
        default:
            printf("=> 잘못된 선택입니다. 다시 입력해주세요.\n");
            break;
        }
    }
}

int main()
{
    Am17();
    return 0;
}

// 버퍼에 남아있는 엔터키(\n) 등을 제거하는 함수
void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void display_menu()
{
    printf("[0.종료 1.추가 2.수정 3.목록] 선택? ");
}

void view_playlist(char playlist[][MAX_TITLE], int count)
{
    if (count == 0) 
    {
        printf("=> 플레이리스트가 비어있습니다.\n");
        return;
    }
    printf("\n--- 현재 노래 목록 ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, playlist[i]);
    }
}

// 새로운 노래를 플레이리스트에 추가.
void add_song(char playlist[][MAX_TITLE], int* count)
{
    if (*count >= MAX_SONG)
    {
        printf("=> 플레이리스트가 가득 찼습니다.\n");
        return;
    }

    printf("추가할 노래 제목을 입력하세요: ");
    fgets(playlist[*count], MAX_TITLE, stdin);      // 띄어쓰기를 포함한 한 줄을 읽기 위해 fgets 사용
    playlist[*count][strcspn(playlist[*count], "\n")] = '\0';

    (*count)++;         // 포인터가 가리키는 곳의 값을 1 증가
    printf("=> '%s'이(가) 추가되었습니다.\n", playlist[*count - 1]);
}

void edit_song(char playlist[][MAX_TITLE], int count)
{
    if (count == 0) 
    {
        printf("=> 수정할 노래가 없습니다.\n");
        return;
    }
    view_playlist(playlist, count);

    int song_num;
    printf("수정할 노래의 번호를 입력하세요: ");
    scanf("%d", &song_num);
    clear_input_buffer();           // 다음에 오는 fgets가 오작동하지 않도록 버퍼를 반드시 비워줌

    if (song_num < 1 || song_num > count) 
    {
        printf("=> 잘못된 번호입니다.\n");
        return;
    }

    printf("새로운 제목을 입력하세요: ");
    fgets(playlist[song_num - 1], MAX_TITLE, stdin);
    playlist[song_num - 1][strcspn(playlist[song_num - 1], "\n")] = '\0';

    printf("=> %d번 노래의 제목이 수정되었습니다.\n", song_num);
}