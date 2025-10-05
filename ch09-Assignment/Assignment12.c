/*
	���ϸ�: Assignment12 (���̵�: ***)
	����: �Է¹��� ���ڿ��� ���Ͽ� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ��(rotate)�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� ��� "abcdef"�� ���������� 2���� ȸ���ϸ� "efabcd"�� �ȴ�. �̵��� ���� ���� ������ ��������, ����� ���������� �̵��Ѵ�. 
	�̵��� ���ڼ��� 0�� �ԷµǸ� ���α׷��� �����Ѵ�.
	�ۼ���: ������
	��¥: 2025.10.05
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>     // strlen, strcpy, strncpy, strncat �Լ� ���

void rotate_string(char* str, int n) 
{
    int len = strlen(str);

    if (len <= 1)    // ���ڿ� ���̰� 0 �Ǵ� 1�̸� ȸ�� �ǹ̰� �����Ƿ� �Լ� ����
    {
        return;
    }

    int k = n % len;    // ���� �̵��� �Ÿ�(k) ���
    if (k < 0) {
        k = k + len;
    }

    if (k == 0)         // ȸ���� �ʿ䰡 ������ �Լ� ����
    {
        return;
    }

    char temp[256];     // �ӽ� ���� ����(����) ����

    // ���ڿ� ������
    strncpy(temp, str + len - k, k);
    temp[k] = '\0';     // strncpy�� NULL ���ڸ� �������� �����Ƿ� ���� �߰�

    strncat(temp, str, len - k);

    strcpy(str, temp);     //�ϼ��� �ӽ� ������ ������ ���� ���ڿ��� ����
}

void Am12() 
{
    char text[256];
    int shift_amount;

    printf("���ڿ�? ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';           // fgets�� ���� ���� ���κ��� \n(���� ����) ����

    while (1)    // �̵��� ���� ���� 0�� �Էµ� ������ ���� �ݺ� 
    {
        printf("\n�̵��� ���� ��(0 �Է� �� ����): ");
        scanf("%d", &shift_amount);

        if (shift_amount == 0)      // 0 �Է� �� ����
        {
            break;
        }

        rotate_string(text, shift_amount);      // �Լ� ȣ���Ͽ� ȸ��

        printf("���: %s\n", text);
    }

    printf("\n���α׷��� �����մϴ�.\n");
}

int main()
{
    Am12();
    return 0;
}