/*
	���ϸ�: Assignment17 (���̵�: ***)
	����: �Է¹��� �뷡 ������ �ִ� 20�� �����ϰ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�. �뷡 ������ ���̴� ��� 40���ڶ�� �����Ѵ�. ������ �޴���
	�뷡 ������ �߰��ϴ� ���, �뷡 ������ �����ϴ� ���, �뷡 ����� ����ϴ� ����� ó���Ѵ�.
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_SONG 20
#define MAX_TITLE 41

 // �Լ� ���� ����
void display_menu();
void add_song(char playlist[][MAX_TITLE], int* count);
void edit_song(char playlist[][MAX_TITLE], int count);
void view_playlist(char playlist[][MAX_TITLE], int count);
void clear_input_buffer();


void Am17()
{
    char playlist[MAX_SONG][MAX_TITLE] = { 0 };    // 2���� �迭�� �̿��� ���� ���� ���ڿ�(�뷡 ����)�� ����
    int song_count = 0;
    int choice;

    while (1)
    {
        display_menu();
        scanf("%d", &choice);

        clear_input_buffer();           // scanf�� ���ۿ� ����Ű(\n)�� ���ܵ�.

        switch (choice)
        {
        case 1:
            add_song(playlist, &song_count);    // main�� song_count ���� ���� �ٲٱ� ���� �ּ�(&)�� ����
            break;
        case 2:
            edit_song(playlist, song_count);
            break;
        case 3:
            view_playlist(playlist, song_count);
            break;
        case 0:
            printf("���α׷��� �����մϴ�.\n");
            return;
        default:
            printf("=> �߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n");
            break;
        }
    }
}

int main()
{
    Am17();
    return 0;
}

// ���ۿ� �����ִ� ����Ű(\n) ���� �����ϴ� �Լ�
void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void display_menu()
{
    printf("[0.���� 1.�߰� 2.���� 3.���] ����? ");
}

void view_playlist(char playlist[][MAX_TITLE], int count)
{
    if (count == 0) 
    {
        printf("=> �÷��̸���Ʈ�� ����ֽ��ϴ�.\n");
        return;
    }
    printf("\n--- ���� �뷡 ��� ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, playlist[i]);
    }
}

// ���ο� �뷡�� �÷��̸���Ʈ�� �߰�.
void add_song(char playlist[][MAX_TITLE], int* count)
{
    if (*count >= MAX_SONG)
    {
        printf("=> �÷��̸���Ʈ�� ���� á���ϴ�.\n");
        return;
    }

    printf("�߰��� �뷡 ������ �Է��ϼ���: ");
    fgets(playlist[*count], MAX_TITLE, stdin);      // ���⸦ ������ �� ���� �б� ���� fgets ���
    playlist[*count][strcspn(playlist[*count], "\n")] = '\0';

    (*count)++;         // �����Ͱ� ����Ű�� ���� ���� 1 ����
    printf("=> '%s'��(��) �߰��Ǿ����ϴ�.\n", playlist[*count - 1]);
}

void edit_song(char playlist[][MAX_TITLE], int count)
{
    if (count == 0) 
    {
        printf("=> ������ �뷡�� �����ϴ�.\n");
        return;
    }
    view_playlist(playlist, count);

    int song_num;
    printf("������ �뷡�� ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &song_num);
    clear_input_buffer();           // ������ ���� fgets�� ���۵����� �ʵ��� ���۸� �ݵ�� �����

    if (song_num < 1 || song_num > count) 
    {
        printf("=> �߸��� ��ȣ�Դϴ�.\n");
        return;
    }

    printf("���ο� ������ �Է��ϼ���: ");
    fgets(playlist[song_num - 1], MAX_TITLE, stdin);
    playlist[song_num - 1][strcspn(playlist[song_num - 1], "\n")] = '\0';

    printf("=> %d�� �뷡�� ������ �����Ǿ����ϴ�.\n", song_num);
}